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

// Function: entry_001d7288
// Address: 0x1d7288 - 0x1d72e4
void entry_001d7288_0x1d7288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7288_0x1d7288");
#endif

    switch (ctx->pc) {
        case 0x1d7298u: goto label_1d7298;
        case 0x1d72c0u: goto label_1d72c0;
        case 0x1d72dcu: goto label_1d72dc;
        default: break;
    }

    ctx->pc = 0x1d7288u;

    // 0x1d7288: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x1d7288u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d728c: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x1d728cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1d7290: 0xc076986  jal         func_1DA618
    ctx->pc = 0x1D7290u;
    SET_GPR_U32(ctx, 31, 0x1D7298u);
    ctx->pc = 0x1D7294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7290u;
    // 0x1d7294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA618u, 0x1D7290u, 0x1D7298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7298u;
label_1d7298:
    // 0x1d7298: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d7298u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d729c: 0x169e0011  bne         $s4, $fp, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D729Cu;
    {
        const bool branch_taken_0x1d729c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 30));
        ctx->pc = 0x1D72A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D729Cu;
        // 0x1d72a0: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d729c) {
            ctx->pc = 0x1D72E4u;
            return;
        }
    }
    ctx->pc = 0x1D72A4u;
    // 0x1d72a4: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1d72a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1d72a8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1d72a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d72ac: 0x8ea70040  lw          $a3, 0x40($s5)
    ctx->pc = 0x1d72acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x1d72b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d72b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d72b4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1d72b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d72b8: 0xc076ede  jal         func_1DBB78
    ctx->pc = 0x1D72B8u;
    SET_GPR_U32(ctx, 31, 0x1D72C0u);
    ctx->pc = 0x1D72BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D72B8u;
    // 0x1d72bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB78u, 0x1D72B8u, 0x1D72C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D72C0u;
label_1d72c0:
    // 0x1d72c0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d72c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d72c4: 0x169e0007  bne         $s4, $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D72C4u;
    {
        const bool branch_taken_0x1d72c4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 30));
        ctx->pc = 0x1D72C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D72C4u;
        // 0x1d72c8: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d72c4) {
            ctx->pc = 0x1D72E4u;
            return;
        }
    }
    ctx->pc = 0x1D72CCu;
    // 0x1d72cc: 0x92c60001  lbu         $a2, 0x1($s6)
    ctx->pc = 0x1d72ccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    // 0x1d72d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d72d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d72d4: 0xc076b92  jal         func_1DAE48
    ctx->pc = 0x1D72D4u;
    SET_GPR_U32(ctx, 31, 0x1D72DCu);
    ctx->pc = 0x1D72D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D72D4u;
    // 0x1d72d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAE48u, 0x1D72D4u, 0x1D72DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D72DCu;
label_1d72dc:
    // 0x1d72dc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d72dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d72e0: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1d72e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    ctx->pc = 0x1d72e4u;
}
