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

// Function: entry_00163e90
// Address: 0x163e90 - 0x163ef0
void entry_00163e90_0x163e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163e90_0x163e90");
#endif

    switch (ctx->pc) {
        case 0x163ed0u: goto label_163ed0;
        default: break;
    }

    ctx->pc = 0x163e90u;

    // 0x163e90: 0x86820218  lh          $v0, 0x218($s4)
    ctx->pc = 0x163e90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 536)));
    // 0x163e94: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x163e94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x163e98: 0xc66002f0  lwc1        $f0, 0x2F0($s3)
    ctx->pc = 0x163e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163e9c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x163e9cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x163ea0: 0x0  nop
    ctx->pc = 0x163ea0u;
    // NOP
    // 0x163ea4: 0x0  nop
    ctx->pc = 0x163ea4u;
    // NOP
    // 0x163ea8: 0x1a40001d  blez        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x163EA8u;
    {
        const bool branch_taken_0x163ea8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x163EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EA8u;
        // 0x163eac: 0xe66002e8  swc1        $f0, 0x2E8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 744), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ea8) {
            ctx->pc = 0x163F20u;
            return;
        }
    }
    ctx->pc = 0x163EB0u;
    // 0x163eb0: 0x8e620340  lw          $v0, 0x340($s3)
    ctx->pc = 0x163eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x163eb4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x163eb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x163eb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x163eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ebc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x163ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ec0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x163ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x163ec4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x163ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x163ec8: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x163EC8u;
    SET_GPR_U32(ctx, 31, 0x163ED0u);
    ctx->pc = 0x163ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163EC8u;
    // 0x163ecc: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x163EC8u, 0x163ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163ED0u;
label_163ed0:
    // 0x163ed0: 0x8e630340  lw          $v1, 0x340($s3)
    ctx->pc = 0x163ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x163ed4: 0x2622fffe  addiu       $v0, $s1, -0x2
    ctx->pc = 0x163ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x163ed8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x163ed8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x163edc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x163EDCu;
    {
        const bool branch_taken_0x163edc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x163EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EDCu;
        // 0x163ee0: 0x721021  addu        $v0, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163edc) {
            ctx->pc = 0x163EF0u;
            return;
        }
    }
    ctx->pc = 0x163EE4u;
    // 0x163ee4: 0xae620340  sw          $v0, 0x340($s3)
    ctx->pc = 0x163ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 832), GPR_U32(ctx, 2));
    // 0x163ee8: 0x1000ff6e  b           . + 4 + (-0x92 << 2)
    ctx->pc = 0x163EE8u;
    {
        const bool branch_taken_0x163ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EE8u;
        // 0x163eec: 0xae600344  sw          $zero, 0x344($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 836), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ee8) {
            ctx->pc = 0x163CA4u;
            return;
        }
    }
    ctx->pc = 0x163EF0u;
}
