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

// Function: entry_0016a30c
// Address: 0x16a30c - 0x16a350
void entry_0016a30c_0x16a30c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a30c_0x16a30c");
#endif

    switch (ctx->pc) {
        case 0x16a314u: goto label_16a314;
        case 0x16a32cu: goto label_16a32c;
        case 0x16a34cu: goto label_16a34c;
        default: break;
    }

    ctx->pc = 0x16a30cu;

    // 0x16a30c: 0xc059990  jal         func_166640
    ctx->pc = 0x16A30Cu;
    SET_GPR_U32(ctx, 31, 0x16A314u);
    ctx->pc = 0x166640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166640u, 0x16A30Cu, 0x16A314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A314u;
label_16a314:
    // 0x16a314: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16a314u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a318: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x16a318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x16a31c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16a31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x16a320: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16a320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16a324: 0xc055c50  jal         func_157140
    ctx->pc = 0x16A324u;
    SET_GPR_U32(ctx, 31, 0x16A32Cu);
    ctx->pc = 0x16A328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A324u;
    // 0x16a328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157140u, 0x16A324u, 0x16A32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A32Cu;
label_16a32c:
    // 0x16a32c: 0x2a410000  slti        $at, $s2, 0x0
    ctx->pc = 0x16a32cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x16a330: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x16A330u;
    {
        const bool branch_taken_0x16a330 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A330u;
        // 0x16a334: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a330) {
            ctx->pc = 0x16A350u;
            return;
        }
    }
    ctx->pc = 0x16A338u;
    // 0x16a338: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16a338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x16a33c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a340: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16a340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16a344: 0xc0425a4  jal         func_109690
    ctx->pc = 0x16A344u;
    SET_GPR_U32(ctx, 31, 0x16A34Cu);
    ctx->pc = 0x16A348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A344u;
    // 0x16a348: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x16A344u, 0x16A34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A34Cu;
label_16a34c:
    // 0x16a34c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x16a34cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16a350u;
}
