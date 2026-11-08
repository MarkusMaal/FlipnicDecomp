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

// Function: entry_0016ae64
// Address: 0x16ae64 - 0x16aeb8
void entry_0016ae64_0x16ae64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ae64_0x16ae64");
#endif

    switch (ctx->pc) {
        case 0x16ae94u: goto label_16ae94;
        case 0x16aea0u: goto label_16aea0;
        case 0x16aeb4u: goto label_16aeb4;
        default: break;
    }

    ctx->pc = 0x16ae64u;

    // 0x16ae64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16ae64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ae68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16ae68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16ae6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16ae6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ae70: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x16ae70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x16ae74: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x16ae74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16ae78: 0x46140801  sub.s       $f0, $f1, $f20
    ctx->pc = 0x16ae78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x16ae7c: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x16ae7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x16ae80: 0x46010343  div.s       $f13, $f0, $f1
    ctx->pc = 0x16ae80u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x16ae84: 0x0  nop
    ctx->pc = 0x16ae84u;
    // NOP
    // 0x16ae88: 0x0  nop
    ctx->pc = 0x16ae88u;
    // NOP
    // 0x16ae8c: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x16AE8Cu;
    SET_GPR_U32(ctx, 31, 0x16AE94u);
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x16AE8Cu, 0x16AE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AE94u;
label_16ae94:
    // 0x16ae94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16ae94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ae98: 0xc0564b8  jal         func_1592E0
    ctx->pc = 0x16AE98u;
    SET_GPR_U32(ctx, 31, 0x16AEA0u);
    ctx->pc = 0x16AE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE98u;
    // 0x16ae9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1592E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592E0u, 0x16AE98u, 0x16AEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AEA0u;
label_16aea0:
    // 0x16aea0: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x16aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x16aea4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x16aea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x16aea8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16aea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16aeac: 0xc055dac  jal         func_1576B0
    ctx->pc = 0x16AEACu;
    SET_GPR_U32(ctx, 31, 0x16AEB4u);
    ctx->pc = 0x16AEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AEACu;
    // 0x16aeb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1576B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1576B0u, 0x16AEACu, 0x16AEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AEB4u;
label_16aeb4:
    // 0x16aeb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16aeb8u;
}
