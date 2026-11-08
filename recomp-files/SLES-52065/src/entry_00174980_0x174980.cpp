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

// Function: entry_00174980
// Address: 0x174980 - 0x1749f4
void entry_00174980_0x174980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174980_0x174980");
#endif

    switch (ctx->pc) {
        case 0x174998u: goto label_174998;
        case 0x1749b0u: goto label_1749b0;
        case 0x1749f0u: goto label_1749f0;
        default: break;
    }

    ctx->pc = 0x174980u;

label_174980:
    // 0x174980: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x174980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x174984: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x174984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x174988: 0x24421950  addiu       $v0, $v0, 0x1950
    ctx->pc = 0x174988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6480));
    // 0x17498c: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x17498cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x174990: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x174990u;
    SET_GPR_U32(ctx, 31, 0x174998u);
    ctx->pc = 0x174994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174990u;
    // 0x174994: 0x722021  addu        $a0, $v1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x174990u, 0x174998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174998u;
label_174998:
    // 0x174998: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x174998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x17499c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x17499cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1749a0: 0x24421990  addiu       $v0, $v0, 0x1990
    ctx->pc = 0x1749a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6544));
    // 0x1749a4: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x1749a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1749a8: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1749A8u;
    SET_GPR_U32(ctx, 31, 0x1749B0u);
    ctx->pc = 0x1749ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1749A8u;
    // 0x1749ac: 0x722021  addu        $a0, $v1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1749A8u, 0x1749B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1749B0u;
label_1749b0:
    // 0x1749b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1749b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1749b4: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1749b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1749b8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1749B8u;
    {
        const bool branch_taken_0x1749b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1749BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1749B8u;
        // 0x1749bc: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1749b8) {
            ctx->pc = 0x174980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174980;
        }
    }
    ctx->pc = 0x1749C0u;
    // 0x1749c0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1749c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1749c4: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1749c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1749c8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1749c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1749cc: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x1749ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1749d0: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x1749d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x1749d4: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x1749d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1749d8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1749D8u;
    {
        const bool branch_taken_0x1749d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1749DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1749D8u;
        // 0x1749dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1749d8) {
            ctx->pc = 0x1749F4u;
            return;
        }
    }
    ctx->pc = 0x1749E0u;
    // 0x1749e0: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x1749e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x1749e4: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1749e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1749e8: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1749E8u;
    SET_GPR_U32(ctx, 31, 0x1749F0u);
    ctx->pc = 0x1749ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1749E8u;
    // 0x1749ec: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1749E8u, 0x1749F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1749F0u;
label_1749f0:
    // 0x1749f0: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1749f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    ctx->pc = 0x1749f4u;
}
