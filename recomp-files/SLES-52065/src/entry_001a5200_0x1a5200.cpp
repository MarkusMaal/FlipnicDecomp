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

// Function: entry_001a5200
// Address: 0x1a5200 - 0x1a5244
void entry_001a5200_0x1a5200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5200_0x1a5200");
#endif

    switch (ctx->pc) {
        case 0x1a5214u: goto label_1a5214;
        case 0x1a5228u: goto label_1a5228;
        case 0x1a5240u: goto label_1a5240;
        default: break;
    }

    ctx->pc = 0x1a5200u;

    // 0x1a5200: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1a5200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1a5204: 0xde660780  ld          $a2, 0x780($s3)
    ctx->pc = 0x1a5204u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 19), 1920)));
    // 0x1a5208: 0xdc452818  ld          $a1, 0x2818($v0)
    ctx->pc = 0x1a5208u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 10264)));
    // 0x1a520c: 0xc06972c  jal         func_1A5CB0
    ctx->pc = 0x1A520Cu;
    SET_GPR_U32(ctx, 31, 0x1A5214u);
    ctx->pc = 0x1A5210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A520Cu;
    // 0x1a5210: 0x26640950  addiu       $a0, $s3, 0x950 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5CB0u, 0x1A520Cu, 0x1A5214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5214u;
label_1a5214:
    // 0x1a5214: 0x8e650780  lw          $a1, 0x780($s3)
    ctx->pc = 0x1a5214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1920)));
    // 0x1a5218: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a5218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a521c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a521cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5220: 0xc064b08  jal         func_192C20
    ctx->pc = 0x1A5220u;
    SET_GPR_U32(ctx, 31, 0x1A5228u);
    ctx->pc = 0x1A5224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5220u;
    // 0x1a5224: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192C20u, 0x1A5220u, 0x1A5228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5228u;
label_1a5228:
    // 0x1a5228: 0x8e6207c0  lw          $v0, 0x7C0($s3)
    ctx->pc = 0x1a5228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1984)));
    // 0x1a522c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A522Cu;
    {
        const bool branch_taken_0x1a522c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A522Cu;
        // 0x1a5230: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a522c) {
            ctx->pc = 0x1A5244u;
            return;
        }
    }
    ctx->pc = 0x1A5234u;
    // 0x1a5234: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a5234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5238: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x1A5238u;
    SET_GPR_U32(ctx, 31, 0x1A5240u);
    ctx->pc = 0x1A523Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5238u;
    // 0x1a523c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A5238u, 0x1A5240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5240u;
label_1a5240:
    // 0x1a5240: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a5240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a5244u;
}
