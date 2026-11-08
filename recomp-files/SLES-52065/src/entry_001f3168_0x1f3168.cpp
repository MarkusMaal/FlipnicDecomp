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

// Function: entry_001f3168
// Address: 0x1f3168 - 0x1f31c0
void entry_001f3168_0x1f3168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3168_0x1f3168");
#endif

    switch (ctx->pc) {
        case 0x1f317cu: goto label_1f317c;
        case 0x1f31b0u: goto label_1f31b0;
        default: break;
    }

    ctx->pc = 0x1f3168u;

    // 0x1f3168: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f3168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f316c: 0x2450fb88  addiu       $s0, $v0, -0x478
    ctx->pc = 0x1f316cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966152));
    // 0x1f3170: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x1f3170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x1f3174: 0xc080804  jal         func_202010
    ctx->pc = 0x1F3174u;
    SET_GPR_U32(ctx, 31, 0x1F317Cu);
    ctx->pc = 0x1F3178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3174u;
    // 0x1f3178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202010u, 0x1F3174u, 0x1F317Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F317Cu;
label_1f317c:
    // 0x1f317c: 0x2603fff8  addiu       $v1, $s0, -0x8
    ctx->pc = 0x1f317cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x1f3180: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f3180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f3184: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1f3184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3188: 0xa0600103  sb          $zero, 0x103($v1)
    ctx->pc = 0x1f3188u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 259), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f318c: 0x2484fd80  addiu       $a0, $a0, -0x280
    ctx->pc = 0x1f318cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966656));
    // 0x1f3190: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1f3190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1f3194: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f3194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f3198: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f3198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f319c: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1f319cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1f31a0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1f31a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f31a4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f31a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f31a8: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F31A8u;
    SET_GPR_U32(ctx, 31, 0x1F31B0u);
    ctx->pc = 0x1F31ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F31A8u;
    // 0x1f31ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F31A8u, 0x1F31B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F31B0u;
label_1f31b0:
    // 0x1f31b0: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F31B0u;
    {
        const bool branch_taken_0x1f31b0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f31b0) {
            ctx->pc = 0x1F31B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F31B0u;
            // 0x1f31b4: 0x8e02fff8  lw          $v0, -0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F31C0u;
            return;
        }
    }
    ctx->pc = 0x1F31B8u;
    // 0x1f31b8: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1f31b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1f31bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f31bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1f31c0u;
}
