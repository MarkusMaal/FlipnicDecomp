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

// Function: entry_001cdcb0
// Address: 0x1cdcb0 - 0x1cdd1c
void entry_001cdcb0_0x1cdcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdcb0_0x1cdcb0");
#endif

    switch (ctx->pc) {
        case 0x1cdcc8u: goto label_1cdcc8;
        case 0x1cdcd8u: goto label_1cdcd8;
        case 0x1cdd00u: goto label_1cdd00;
        default: break;
    }

    ctx->pc = 0x1cdcb0u;

    // 0x1cdcb0: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1cdcb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cdcb4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1cdcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cdcb8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1cdcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cdcbc: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x1cdcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x1cdcc0: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1CDCC0u;
    SET_GPR_U32(ctx, 31, 0x1CDCC8u);
    ctx->pc = 0x1CDCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCC0u;
    // 0x1cdcc4: 0xafb00030  sw          $s0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1CDCC0u, 0x1CDCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCC8u;
label_1cdcc8:
    // 0x1cdcc8: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x1cdcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1cdccc: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1cdcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1cdcd0: 0xc06ed14  jal         func_1BB450
    ctx->pc = 0x1CDCD0u;
    SET_GPR_U32(ctx, 31, 0x1CDCD8u);
    ctx->pc = 0x1CDCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCD0u;
    // 0x1cdcd4: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB450u, 0x1CDCD0u, 0x1CDCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCD8u;
label_1cdcd8:
    // 0x1cdcd8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cdcd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cdcdc: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x1cdcdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1cdce0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1CDCE0u;
    {
        const bool branch_taken_0x1cdce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cdce0) {
            ctx->pc = 0x1CDC98u;
            return;
        }
    }
    ctx->pc = 0x1CDCE8u;
    // 0x1cdce8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1cdce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cdcec: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1cdcecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1cdcf0: 0xac400064  sw          $zero, 0x64($v0)
    ctx->pc = 0x1cdcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
    // 0x1cdcf4: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1cdcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cdcf8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1CDCF8u;
    SET_GPR_U32(ctx, 31, 0x1CDD00u);
    ctx->pc = 0x1CDCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCF8u;
    // 0x1cdcfc: 0xac400068  sw          $zero, 0x68($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1CDCF8u, 0x1CDD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD00u;
label_1cdd00:
    // 0x1cdd00: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CDD00u;
    {
        const bool branch_taken_0x1cdd00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD00u;
        // 0x1cdd04: 0x3c050023  lui         $a1, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd00) {
            ctx->pc = 0x1CDD1Cu;
            return;
        }
    }
    ctx->pc = 0x1CDD08u;
    // 0x1cdd08: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x1cdd08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
    // 0x1cdd0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cdd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd10: 0x24a5c6a4  addiu       $a1, $a1, -0x395C
    ctx->pc = 0x1cdd10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952612));
    // 0x1cdd14: 0xc0621c0  jal         func_188700
    ctx->pc = 0x1CDD14u;
    SET_GPR_U32(ctx, 31, 0x1CDD1Cu);
    ctx->pc = 0x1CDD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD14u;
    // 0x1cdd18: 0x24c6c6c0  addiu       $a2, $a2, -0x3940 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x1CDD14u, 0x1CDD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD1Cu;
}
