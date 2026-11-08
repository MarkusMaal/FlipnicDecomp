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

// Function: entry_0018e0d8
// Address: 0x18e0d8 - 0x18e114
void entry_0018e0d8_0x18e0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e0d8_0x18e0d8");
#endif

    switch (ctx->pc) {
        case 0x18e10cu: goto label_18e10c;
        default: break;
    }

    ctx->pc = 0x18e0d8u;

    // 0x18e0d8: 0xc6210504  lwc1        $f1, 0x504($s1)
    ctx->pc = 0x18e0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18e0dc: 0x3c023d07  lui         $v0, 0x3D07
    ctx->pc = 0x18e0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15623 << 16));
    // 0x18e0e0: 0x344273c7  ori         $v0, $v0, 0x73C7
    ctx->pc = 0x18e0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29639);
    // 0x18e0e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18e0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18e0e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18e0e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18e0ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e0f0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x18e0f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18e0f4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18e0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x18e0f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18e0f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18e0fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18e0fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18e100: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x18e100u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x18e104: 0xc063270  jal         func_18C9C0
    ctx->pc = 0x18E104u;
    SET_GPR_U32(ctx, 31, 0x18E10Cu);
    ctx->pc = 0x18E108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E104u;
    // 0x18e108: 0xe6200504  swc1        $f0, 0x504($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1284), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C9C0u, 0x18E104u, 0x18E10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E10Cu;
label_18e10c:
    // 0x18e10c: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x18E10Cu;
    {
        const bool branch_taken_0x18e10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e10c) {
            ctx->pc = 0x18E350u;
            return;
        }
    }
    ctx->pc = 0x18E114u;
}
