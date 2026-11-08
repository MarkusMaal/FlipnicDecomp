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

// Function: entry_00102c6c
// Address: 0x102c6c - 0x102ce4
void entry_00102c6c_0x102c6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102c6c_0x102c6c");
#endif

    switch (ctx->pc) {
        case 0x102cacu: goto label_102cac;
        case 0x102cc8u: goto label_102cc8;
        case 0x102cd4u: goto label_102cd4;
        default: break;
    }

    ctx->pc = 0x102c6cu;

    // 0x102c6c: 0x0  nop
    ctx->pc = 0x102c6cu;
    // NOP
    // 0x102c70: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x102c70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x102c74: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x102C74u;
    {
        const bool branch_taken_0x102c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102c74) {
            ctx->pc = 0x102B24u;
            return;
        }
    }
    ctx->pc = 0x102C7Cu;
    // 0x102c7c: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x102c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x102c80: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x102c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x102c84: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x102c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x102c88: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x102c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x102c8c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x102c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x102c90: 0x8c632c1c  lw          $v1, 0x2C1C($v1)
    ctx->pc = 0x102c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11292)));
    // 0x102c94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x102c98: 0x84530004  lh          $s3, 0x4($v0)
    ctx->pc = 0x102c98u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x102c9c: 0x84520002  lh          $s2, 0x2($v0)
    ctx->pc = 0x102c9cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x102ca0: 0x84540000  lh          $s4, 0x0($v0)
    ctx->pc = 0x102ca0u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x102ca4: 0xc07efaa  jal         func_1FBEA8
    ctx->pc = 0x102CA4u;
    SET_GPR_U32(ctx, 31, 0x102CACu);
    ctx->pc = 0x102CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102CA4u;
    // 0x102ca8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBEA8u, 0x102CA4u, 0x102CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102CACu;
label_102cac:
    // 0x102cac: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x102cacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x102cb0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x102cb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102cb4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x102cb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102cb8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x102cb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102cbc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x102cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x102cc0: 0xc0805c8  jal         func_201720
    ctx->pc = 0x102CC0u;
    SET_GPR_U32(ctx, 31, 0x102CC8u);
    ctx->pc = 0x102CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102CC0u;
    // 0x102cc4: 0x24a5e070  addiu       $a1, $a1, -0x1F90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x102CC0u, 0x102CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102CC8u;
label_102cc8:
    // 0x102cc8: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x102cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x102ccc: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x102CCCu;
    SET_GPR_U32(ctx, 31, 0x102CD4u);
    ctx->pc = 0x102CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102CCCu;
    // 0x102cd0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x102CCCu, 0x102CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102CD4u;
label_102cd4:
    // 0x102cd4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x102CD4u;
    {
        const bool branch_taken_0x102cd4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x102CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CD4u;
        // 0x102cd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102cd4) {
            ctx->pc = 0x102CE4u;
            return;
        }
    }
    ctx->pc = 0x102CDCu;
    // 0x102cdc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x102CDCu;
    {
        const bool branch_taken_0x102cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x102cdc) {
            ctx->pc = 0x102D10u;
            return;
        }
    }
    ctx->pc = 0x102CE4u;
}
