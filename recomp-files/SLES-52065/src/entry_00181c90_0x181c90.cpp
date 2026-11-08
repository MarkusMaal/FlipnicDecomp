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

// Function: entry_00181c90
// Address: 0x181c90 - 0x181d08
void entry_00181c90_0x181c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181c90_0x181c90");
#endif

    switch (ctx->pc) {
        case 0x181ca4u: goto label_181ca4;
        default: break;
    }

    ctx->pc = 0x181c90u;

label_181c90:
    // 0x181c90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c94: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x181c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x181c98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x181c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c9c: 0xc061734  jal         func_185CD0
    ctx->pc = 0x181C9Cu;
    SET_GPR_U32(ctx, 31, 0x181CA4u);
    ctx->pc = 0x181CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181C9Cu;
    // 0x181ca0: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185CD0u, 0x181C9Cu, 0x181CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181CA4u;
label_181ca4:
    // 0x181ca4: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x181ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x181ca8: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x181ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x181cac: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x181cacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x181cb0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x181cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x181cb4: 0x24c68a10  addiu       $a2, $a2, -0x75F0
    ctx->pc = 0x181cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937104));
    // 0x181cb8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x181cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x181cbc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x181cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x181cc0: 0x3443000a  ori         $v1, $v0, 0xA
    ctx->pc = 0x181cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x181cc4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x181cc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x181cc8: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x181cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x181ccc: 0xa1070003  sb          $a3, 0x3($t0)
    ctx->pc = 0x181cccu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x181cd0: 0xa1000002  sb          $zero, 0x2($t0)
    ctx->pc = 0x181cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x181cd4: 0xad060004  sw          $a2, 0x4($t0)
    ctx->pc = 0x181cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
    // 0x181cd8: 0xa5050000  sh          $a1, 0x0($t0)
    ctx->pc = 0x181cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x181cdc: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x181cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x181ce0: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x181ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x181ce4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x181ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x181ce8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x181ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x181cec: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x181CECu;
    {
        const bool branch_taken_0x181cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181CECu;
        // 0x181cf0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181cec) {
            ctx->pc = 0x181C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181c90;
        }
    }
    ctx->pc = 0x181CF4u;
    // 0x181cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181cf8: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x181cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x181cfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x181cfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181d00: 0xc061734  jal         func_185CD0
    ctx->pc = 0x181D00u;
    SET_GPR_U32(ctx, 31, 0x181D08u);
    ctx->pc = 0x181D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181D00u;
    // 0x181d04: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185CD0u, 0x181D00u, 0x181D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181D08u;
}
