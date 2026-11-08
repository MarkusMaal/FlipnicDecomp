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

// Function: entry_00174508
// Address: 0x174508 - 0x17452c
void entry_00174508_0x174508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174508_0x174508");
#endif

    switch (ctx->pc) {
        case 0x174510u: goto label_174510;
        case 0x17451cu: goto label_17451c;
        default: break;
    }

    ctx->pc = 0x174508u;

    // 0x174508: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x174508u;
    SET_GPR_U32(ctx, 31, 0x174510u);
    ctx->pc = 0x17450Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174508u;
    // 0x17450c: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x174508u, 0x174510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174510u;
label_174510:
    // 0x174510: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x174510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x174514: 0xc05c550  jal         func_171540
    ctx->pc = 0x174514u;
    SET_GPR_U32(ctx, 31, 0x17451Cu);
    ctx->pc = 0x174518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174514u;
    // 0x174518: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171540u, 0x174514u, 0x17451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17451Cu;
label_17451c:
    // 0x17451c: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x17451cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x174520: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x174520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x174524: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x174524u;
    {
        const bool branch_taken_0x174524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174524u;
        // 0x174528: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174524) {
            ctx->pc = 0x174664u;
            return;
        }
    }
    ctx->pc = 0x17452Cu;
}
