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

// Function: entry_0013fbb8
// Address: 0x13fbb8 - 0x13fbf8
void entry_0013fbb8_0x13fbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fbb8_0x13fbb8");
#endif

    switch (ctx->pc) {
        case 0x13fbd0u: goto label_13fbd0;
        case 0x13fbf0u: goto label_13fbf0;
        default: break;
    }

    ctx->pc = 0x13fbb8u;

    // 0x13fbb8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13fbbc: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x13fbbcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x13fbc0: 0x1020005b  beqz        $at, . + 4 + (0x5B << 2)
    ctx->pc = 0x13FBC0u;
    {
        const bool branch_taken_0x13fbc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FBC0u;
        // 0x13fbc4: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fbc0) {
            ctx->pc = 0x13FD30u;
            return;
        }
    }
    ctx->pc = 0x13FBC8u;
    // 0x13fbc8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x13FBC8u;
    SET_GPR_U32(ctx, 31, 0x13FBD0u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x13FBC8u, 0x13FBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FBD0u;
label_13fbd0:
    // 0x13fbd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13fbd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fbd4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13FBD4u;
    {
        const bool branch_taken_0x13fbd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13FBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FBD4u;
        // 0x13fbd8: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fbd4) {
            ctx->pc = 0x13FBF8u;
            return;
        }
    }
    ctx->pc = 0x13FBDCu;
    // 0x13fbdc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13fbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13fbe0: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x13fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x13fbe4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x13fbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13fbe8: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x13FBE8u;
    SET_GPR_U32(ctx, 31, 0x13FBF0u);
    ctx->pc = 0x13FBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FBE8u;
    // 0x13fbec: 0x24a5f050  addiu       $a1, $a1, -0xFB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x13FBE8u, 0x13FBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FBF0u;
label_13fbf0:
    // 0x13fbf0: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x13FBF0u;
    SET_GPR_U32(ctx, 31, 0x13FBF8u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x13FBF0u, 0x13FBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FBF8u;
}
