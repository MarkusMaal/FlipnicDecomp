#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001d72e4
// Address: 0x1d72e4 - 0x1d7334
void entry_001d72e4_0x1d72e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d72e4_0x1d72e4");
#endif

    switch (ctx->pc) {
        case 0x1d7304u: goto label_1d7304;
        case 0x1d7310u: goto label_1d7310;
        case 0x1d732cu: goto label_1d732c;
        default: break;
    }

    ctx->pc = 0x1d72e4u;

    // 0x1d72e4: 0x8ea80040  lw          $t0, 0x40($s5)
    ctx->pc = 0x1d72e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x1d72e8: 0x8c620550  lw          $v0, 0x550($v1)
    ctx->pc = 0x1d72e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1360)));
    // 0x1d72ec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d72ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d72f0: 0x92c90001  lbu         $t1, 0x1($s6)
    ctx->pc = 0x1d72f0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    // 0x1d72f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d72f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d72f8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1d72f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d72fc: 0xc07735c  jal         func_1DCD70
    ctx->pc = 0x1D72FCu;
    SET_GPR_U32(ctx, 31, 0x1D7304u);
    ctx->pc = 0x1D7300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D72FCu;
    // 0x1d7300: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD70u, 0x1D72FCu, 0x1D7304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7304u;
label_1d7304:
    // 0x1d7304: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d7304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7308: 0xc0773ae  jal         func_1DCEB8
    ctx->pc = 0x1D7308u;
    SET_GPR_U32(ctx, 31, 0x1D7310u);
    ctx->pc = 0x1D730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7308u;
    // 0x1d730c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCEB8u, 0x1D7308u, 0x1D7310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7310u;
label_1d7310:
    // 0x1d7310: 0x92c3000f  lbu         $v1, 0xF($s6)
    ctx->pc = 0x1d7310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 15)));
    // 0x1d7314: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1d7314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d7318: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d7318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d731c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D731Cu;
    {
        const bool branch_taken_0x1d731c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d731c) {
            ctx->pc = 0x1D7320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D731Cu;
            // 0x1d7320: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7334u;
            return;
        }
    }
    ctx->pc = 0x1D7324u;
    // 0x1d7324: 0xc07752e  jal         func_1DD4B8
    ctx->pc = 0x1D7324u;
    SET_GPR_U32(ctx, 31, 0x1D732Cu);
    ctx->pc = 0x1D7328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7324u;
    // 0x1d7328: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD4B8u, 0x1D7324u, 0x1D732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D732Cu;
label_1d732c:
    // 0x1d732c: 0x92c3000f  lbu         $v1, 0xF($s6)
    ctx->pc = 0x1d732cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 15)));
    // 0x1d7330: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x1d7330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    ctx->pc = 0x1d7334u;
}
