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

// Function: entry_0016519c
// Address: 0x16519c - 0x1651fc
void entry_0016519c_0x16519c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016519c_0x16519c");
#endif

    switch (ctx->pc) {
        case 0x1651dcu: goto label_1651dc;
        default: break;
    }

    ctx->pc = 0x16519cu;

    // 0x16519c: 0x0  nop
    ctx->pc = 0x16519cu;
    // NOP
    // 0x1651a0: 0xc66002f0  lwc1        $f0, 0x2F0($s3)
    ctx->pc = 0x1651a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1651a4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1651a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1651a8: 0x0  nop
    ctx->pc = 0x1651a8u;
    // NOP
    // 0x1651ac: 0x0  nop
    ctx->pc = 0x1651acu;
    // NOP
    // 0x1651b0: 0x1a400012  blez        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1651B0u;
    {
        const bool branch_taken_0x1651b0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1651B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1651B0u;
        // 0x1651b4: 0xe66002e8  swc1        $f0, 0x2E8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 744), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1651b0) {
            ctx->pc = 0x1651FCu;
            return;
        }
    }
    ctx->pc = 0x1651B8u;
    // 0x1651b8: 0x8e620340  lw          $v0, 0x340($s3)
    ctx->pc = 0x1651b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x1651bc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1651bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1651c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1651c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1651c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1651c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1651c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1651c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1651cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1651ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1651d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1651d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1651d4: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x1651D4u;
    SET_GPR_U32(ctx, 31, 0x1651DCu);
    ctx->pc = 0x1651D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1651D4u;
    // 0x1651d8: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x1651D4u, 0x1651DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1651DCu;
label_1651dc:
    // 0x1651dc: 0x8e630340  lw          $v1, 0x340($s3)
    ctx->pc = 0x1651dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x1651e0: 0x2622fffe  addiu       $v0, $s1, -0x2
    ctx->pc = 0x1651e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x1651e4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1651e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1651e8: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x1651E8u;
    {
        const bool branch_taken_0x1651e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1651ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1651E8u;
        // 0x1651ec: 0x721021  addu        $v0, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1651e8) {
            ctx->pc = 0x1652F8u;
            return;
        }
    }
    ctx->pc = 0x1651F0u;
    // 0x1651f0: 0xae620340  sw          $v0, 0x340($s3)
    ctx->pc = 0x1651f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 832), GPR_U32(ctx, 2));
    // 0x1651f4: 0x1000ff63  b           . + 4 + (-0x9D << 2)
    ctx->pc = 0x1651F4u;
    {
        const bool branch_taken_0x1651f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1651F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1651F4u;
        // 0x1651f8: 0xae600344  sw          $zero, 0x344($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 836), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1651f4) {
            ctx->pc = 0x164F84u;
            return;
        }
    }
    ctx->pc = 0x1651FCu;
}
