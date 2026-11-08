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

// Function: entry_0016b7f0
// Address: 0x16b7f0 - 0x16b82c
void entry_0016b7f0_0x16b7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b7f0_0x16b7f0");
#endif

    switch (ctx->pc) {
        case 0x16b804u: goto label_16b804;
        case 0x16b810u: goto label_16b810;
        case 0x16b824u: goto label_16b824;
        default: break;
    }

    ctx->pc = 0x16b7f0u;

    // 0x16b7f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b7f4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x16b7f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x16b7f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16b7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b7fc: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x16B7FCu;
    SET_GPR_U32(ctx, 31, 0x16B804u);
    ctx->pc = 0x16B800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B7FCu;
    // 0x16b800: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x16B7FCu, 0x16B804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B804u;
label_16b804:
    // 0x16b804: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16b804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b808: 0xc0564b8  jal         func_1592E0
    ctx->pc = 0x16B808u;
    SET_GPR_U32(ctx, 31, 0x16B810u);
    ctx->pc = 0x16B80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B808u;
    // 0x16b80c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1592E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592E0u, 0x16B808u, 0x16B810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B810u;
label_16b810:
    // 0x16b810: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x16b810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x16b814: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x16b814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x16b818: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16b818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16b81c: 0xc055dac  jal         func_1576B0
    ctx->pc = 0x16B81Cu;
    SET_GPR_U32(ctx, 31, 0x16B824u);
    ctx->pc = 0x16B820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B81Cu;
    // 0x16b820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1576B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1576B0u, 0x16B81Cu, 0x16B824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B824u;
label_16b824:
    // 0x16b824: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16B824u;
    {
        const bool branch_taken_0x16b824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B824u;
        // 0x16b828: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b824) {
            ctx->pc = 0x16B830u;
            return;
        }
    }
    ctx->pc = 0x16B82Cu;
}
