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

// Function: entry_0018dc10
// Address: 0x18dc10 - 0x18dc5c
void entry_0018dc10_0x18dc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dc10_0x18dc10");
#endif

    switch (ctx->pc) {
        case 0x18dc20u: goto label_18dc20;
        case 0x18dc54u: goto label_18dc54;
        default: break;
    }

    ctx->pc = 0x18dc10u;

    // 0x18dc10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18dc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dc14: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x18dc14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18dc18: 0xc06333c  jal         func_18CCF0
    ctx->pc = 0x18DC18u;
    SET_GPR_U32(ctx, 31, 0x18DC20u);
    ctx->pc = 0x18DC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC18u;
    // 0x18dc1c: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCF0u, 0x18DC18u, 0x18DC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DC20u;
label_18dc20:
    // 0x18dc20: 0xc6210504  lwc1        $f1, 0x504($s1)
    ctx->pc = 0x18dc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18dc24: 0x3c023d07  lui         $v0, 0x3D07
    ctx->pc = 0x18dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15623 << 16));
    // 0x18dc28: 0x344273c7  ori         $v0, $v0, 0x73C7
    ctx->pc = 0x18dc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29639);
    // 0x18dc2c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18dc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18dc30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18dc30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18dc34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18dc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dc38: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x18dc38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18dc3c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x18dc40: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18dc40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18dc44: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18dc44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18dc48: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x18dc48u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x18dc4c: 0xc063270  jal         func_18C9C0
    ctx->pc = 0x18DC4Cu;
    SET_GPR_U32(ctx, 31, 0x18DC54u);
    ctx->pc = 0x18DC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC4Cu;
    // 0x18dc50: 0xe6200504  swc1        $f0, 0x504($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1284), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C9C0u, 0x18DC4Cu, 0x18DC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DC54u;
label_18dc54:
    // 0x18dc54: 0x100001be  b           . + 4 + (0x1BE << 2)
    ctx->pc = 0x18DC54u;
    {
        const bool branch_taken_0x18dc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dc54) {
            ctx->pc = 0x18E350u;
            return;
        }
    }
    ctx->pc = 0x18DC5Cu;
}
