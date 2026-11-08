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

// Function: entry_00102184
// Address: 0x102184 - 0x1021fc
void entry_00102184_0x102184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102184_0x102184");
#endif

    switch (ctx->pc) {
        case 0x102194u: goto label_102194;
        case 0x10219cu: goto label_10219c;
        case 0x1021a8u: goto label_1021a8;
        case 0x1021b4u: goto label_1021b4;
        case 0x1021c4u: goto label_1021c4;
        case 0x1021ecu: goto label_1021ec;
        default: break;
    }

    ctx->pc = 0x102184u;

    // 0x102184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102188: 0xaf908218  sw          $s0, -0x7DE8($gp)
    ctx->pc = 0x102188u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935064), GPR_U32(ctx, 16));
    // 0x10218c: 0xc057430  jal         func_15D0C0
    ctx->pc = 0x10218Cu;
    SET_GPR_U32(ctx, 31, 0x102194u);
    ctx->pc = 0x102190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10218Cu;
    // 0x102190: 0xaf9085f4  sw          $s0, -0x7A0C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936052), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D0C0u, 0x10218Cu, 0x102194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102194u;
label_102194:
    // 0x102194: 0xc041d58  jal         func_107560
    ctx->pc = 0x102194u;
    SET_GPR_U32(ctx, 31, 0x10219Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x102194u, 0x10219Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10219Cu;
label_10219c:
    // 0x10219c: 0x8f858388  lw          $a1, -0x7C78($gp)
    ctx->pc = 0x10219cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x1021a0: 0xc046070  jal         func_1181C0
    ctx->pc = 0x1021A0u;
    SET_GPR_U32(ctx, 31, 0x1021A8u);
    ctx->pc = 0x1021A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1021A0u;
    // 0x1021a4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1181C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1181C0u, 0x1021A0u, 0x1021A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1021A8u;
label_1021a8:
    // 0x1021a8: 0x8f858388  lw          $a1, -0x7C78($gp)
    ctx->pc = 0x1021a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x1021ac: 0xc04610c  jal         func_118430
    ctx->pc = 0x1021ACu;
    SET_GPR_U32(ctx, 31, 0x1021B4u);
    ctx->pc = 0x1021B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1021ACu;
    // 0x1021b0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118430u, 0x1021ACu, 0x1021B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1021B4u;
label_1021b4:
    // 0x1021b4: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1021b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x1021b8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1021b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1021bc: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x1021BCu;
    SET_GPR_U32(ctx, 31, 0x1021C4u);
    ctx->pc = 0x1021C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1021BCu;
    // 0x1021c0: 0x24a5e048  addiu       $a1, $a1, -0x1FB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x1021BCu, 0x1021C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1021C4u;
label_1021c4:
    // 0x1021c4: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1021c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x1021c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1021c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1021cc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1021ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1021d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1021d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1021d4: 0x24a5e050  addiu       $a1, $a1, -0x1FB0
    ctx->pc = 0x1021d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959184));
    // 0x1021d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1021d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1021dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1021dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1021e0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1021e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1021e4: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x1021E4u;
    SET_GPR_U32(ctx, 31, 0x1021ECu);
    ctx->pc = 0x1021E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1021E4u;
    // 0x1021e8: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x1021E4u, 0x1021ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1021ECu;
label_1021ec:
    // 0x1021ec: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1021ECu;
    {
        const bool branch_taken_0x1021ec = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1021F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1021ECu;
        // 0x1021f0: 0x8f858388  lw          $a1, -0x7C78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1021ec) {
            ctx->pc = 0x1021FCu;
            return;
        }
    }
    ctx->pc = 0x1021F4u;
    // 0x1021f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1021F4u;
    {
        const bool branch_taken_0x1021f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1021F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1021F4u;
        // 0x1021f8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1021f4) {
            ctx->pc = 0x102214u;
            return;
        }
    }
    ctx->pc = 0x1021FCu;
}
