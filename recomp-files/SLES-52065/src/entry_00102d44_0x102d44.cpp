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

// Function: entry_00102d44
// Address: 0x102d44 - 0x102db0
void entry_00102d44_0x102d44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102d44_0x102d44");
#endif

    switch (ctx->pc) {
        case 0x102d78u: goto label_102d78;
        case 0x102d94u: goto label_102d94;
        case 0x102da0u: goto label_102da0;
        default: break;
    }

    ctx->pc = 0x102d44u;

    // 0x102d44: 0x0  nop
    ctx->pc = 0x102d44u;
    // NOP
    // 0x102d48: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x102d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x102d4c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x102d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x102d50: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x102d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x102d54: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x102d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x102d58: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x102d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x102d5c: 0x8c632c1c  lw          $v1, 0x2C1C($v1)
    ctx->pc = 0x102d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11292)));
    // 0x102d60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x102d64: 0x84540004  lh          $s4, 0x4($v0)
    ctx->pc = 0x102d64u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x102d68: 0x84530002  lh          $s3, 0x2($v0)
    ctx->pc = 0x102d68u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x102d6c: 0x84550000  lh          $s5, 0x0($v0)
    ctx->pc = 0x102d6cu;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x102d70: 0xc07efaa  jal         func_1FBEA8
    ctx->pc = 0x102D70u;
    SET_GPR_U32(ctx, 31, 0x102D78u);
    ctx->pc = 0x102D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102D70u;
    // 0x102d74: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBEA8u, 0x102D70u, 0x102D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102D78u;
label_102d78:
    // 0x102d78: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x102d78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x102d7c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x102d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102d80: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x102d80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102d84: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x102d84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102d88: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x102d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x102d8c: 0xc0805c8  jal         func_201720
    ctx->pc = 0x102D8Cu;
    SET_GPR_U32(ctx, 31, 0x102D94u);
    ctx->pc = 0x102D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102D8Cu;
    // 0x102d90: 0x24a5e070  addiu       $a1, $a1, -0x1F90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x102D8Cu, 0x102D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102D94u;
label_102d94:
    // 0x102d94: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x102d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x102d98: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x102D98u;
    SET_GPR_U32(ctx, 31, 0x102DA0u);
    ctx->pc = 0x102D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102D98u;
    // 0x102d9c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x102D98u, 0x102DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102DA0u;
label_102da0:
    // 0x102da0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x102DA0u;
    {
        const bool branch_taken_0x102da0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x102da0) {
            ctx->pc = 0x102DB0u;
            return;
        }
    }
    ctx->pc = 0x102DA8u;
    // 0x102da8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x102DA8u;
    {
        const bool branch_taken_0x102da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x102da8) {
            ctx->pc = 0x102DB0u;
            return;
        }
    }
    ctx->pc = 0x102DB0u;
}
