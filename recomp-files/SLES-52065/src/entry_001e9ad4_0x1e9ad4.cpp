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

// Function: entry_001e9ad4
// Address: 0x1e9ad4 - 0x1e9b24
void entry_001e9ad4_0x1e9ad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9ad4_0x1e9ad4");
#endif

    switch (ctx->pc) {
        case 0x1e9b14u: goto label_1e9b14;
        default: break;
    }

    ctx->pc = 0x1e9ad4u;

    // 0x1e9ad4: 0x0  nop
    ctx->pc = 0x1e9ad4u;
    // NOP
    // 0x1e9ad8: 0x92270001  lbu         $a3, 0x1($s1)
    ctx->pc = 0x1e9ad8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1e9adc: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x1e9adcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e9ae0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e9ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9ae4: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x1e9ae4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1e9ae8: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x1e9ae8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e9aec: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1e9aecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1e9af0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1e9af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1e9af4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1e9af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1e9af8: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x1e9af8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x1e9afc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1e9afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1e9b00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e9b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e9b04: 0xafa203ac  sw          $v0, 0x3AC($sp)
    ctx->pc = 0x1e9b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 940), GPR_U32(ctx, 2));
    // 0x1e9b08: 0x8fa503ac  lw          $a1, 0x3AC($sp)
    ctx->pc = 0x1e9b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 940)));
    // 0x1e9b0c: 0xc07a478  jal         func_1E91E0
    ctx->pc = 0x1E9B0Cu;
    SET_GPR_U32(ctx, 31, 0x1E9B14u);
    ctx->pc = 0x1E9B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9B0Cu;
    // 0x1e9b10: 0x27a603a0  addiu       $a2, $sp, 0x3A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E91E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E91E0u, 0x1E9B0Cu, 0x1E9B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9B14u;
label_1e9b14:
    // 0x1e9b14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9B14u;
    {
        const bool branch_taken_0x1e9b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9b14) {
            ctx->pc = 0x1E9B24u;
            return;
        }
    }
    ctx->pc = 0x1E9B1Cu;
    // 0x1e9b1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E9B1Cu;
    {
        const bool branch_taken_0x1e9b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9B1Cu;
        // 0x1e9b20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9b1c) {
            ctx->pc = 0x1E9B40u;
            return;
        }
    }
    ctx->pc = 0x1E9B24u;
}
