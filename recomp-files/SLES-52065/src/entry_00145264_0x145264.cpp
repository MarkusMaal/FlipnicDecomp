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

// Function: entry_00145264
// Address: 0x145264 - 0x145298
void entry_00145264_0x145264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145264_0x145264");
#endif

    switch (ctx->pc) {
        case 0x145274u: goto label_145274;
        case 0x145288u: goto label_145288;
        default: break;
    }

    ctx->pc = 0x145264u;

    // 0x145264: 0xae5001a0  sw          $s0, 0x1A0($s2)
    ctx->pc = 0x145264u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 16));
    // 0x145268: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x145268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x14526c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14526Cu;
    SET_GPR_U32(ctx, 31, 0x145274u);
    ctx->pc = 0x145270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14526Cu;
    // 0x145270: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14526Cu, 0x145274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145274u;
label_145274:
    // 0x145274: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x145274u;
    {
        const bool branch_taken_0x145274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145274u;
        // 0x145278: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145274) {
            ctx->pc = 0x145298u;
            return;
        }
    }
    ctx->pc = 0x14527Cu;
    // 0x14527c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x14527cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145280: 0xc051654  jal         func_145950
    ctx->pc = 0x145280u;
    SET_GPR_U32(ctx, 31, 0x145288u);
    ctx->pc = 0x145284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145280u;
    // 0x145284: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145950u, 0x145280u, 0x145288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145288u;
label_145288:
    // 0x145288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x145288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14528c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x14528cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145290: 0xc0515b4  jal         func_1456D0
    ctx->pc = 0x145290u;
    SET_GPR_U32(ctx, 31, 0x145298u);
    ctx->pc = 0x145294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145290u;
    // 0x145294: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1456D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1456D0u, 0x145290u, 0x145298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145298u;
}
