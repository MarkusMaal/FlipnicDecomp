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

// Function: entry_001282bc
// Address: 0x1282bc - 0x1282f4
void entry_001282bc_0x1282bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001282bc_0x1282bc");
#endif

    switch (ctx->pc) {
        case 0x1282ccu: goto label_1282cc;
        case 0x1282ecu: goto label_1282ec;
        default: break;
    }

    ctx->pc = 0x1282bcu;

    // 0x1282bc: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x1282bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1282c0: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x1282c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1282c4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1282C4u;
    SET_GPR_U32(ctx, 31, 0x1282CCu);
    ctx->pc = 0x1282C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1282C4u;
    // 0x1282c8: 0x26530008  addiu       $s3, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1282C4u, 0x1282CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1282CCu;
label_1282cc:
    // 0x1282cc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1282ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1282d0: 0x16800008  bnez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1282D0u;
    {
        const bool branch_taken_0x1282d0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1282D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1282D0u;
        // 0x1282d4: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1282d0) {
            ctx->pc = 0x1282F4u;
            return;
        }
    }
    ctx->pc = 0x1282D8u;
    // 0x1282d8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1282d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1282dc: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1282dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1282e0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1282e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1282e4: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1282E4u;
    SET_GPR_U32(ctx, 31, 0x1282ECu);
    ctx->pc = 0x1282E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1282E4u;
    // 0x1282e8: 0x24a5eba0  addiu       $a1, $a1, -0x1460 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1282E4u, 0x1282ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1282ECu;
label_1282ec:
    // 0x1282ec: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1282ECu;
    SET_GPR_U32(ctx, 31, 0x1282F4u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1282ECu, 0x1282F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1282F4u;
}
