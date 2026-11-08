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

// Function: entry_001fb038
// Address: 0x1fb038 - 0x1fb0bc
void entry_001fb038_0x1fb038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb038_0x1fb038");
#endif

    ctx->pc = 0x1fb038u;

    // 0x1fb038: 0x3c012f2e  lui         $at, 0x2F2E
    ctx->pc = 0x1fb038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12078 << 16));
    // 0x1fb03c: 0x3421c9d3  ori         $at, $at, 0xC9D3
    ctx->pc = 0x1fb03cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51667);
    // 0x1fb040: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fb040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb044: 0x3c01b2d7  lui         $at, 0xB2D7
    ctx->pc = 0x1fb044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45783 << 16));
    // 0x1fb048: 0x34212f34  ori         $at, $at, 0x2F34
    ctx->pc = 0x1fb048u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12084);
    // 0x1fb04c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fb04cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb050: 0x3c013638  lui         $at, 0x3638
    ctx->pc = 0x1fb050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13880 << 16));
    // 0x1fb054: 0x3421ef1b  ori         $at, $at, 0xEF1B
    ctx->pc = 0x1fb054u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61211);
    // 0x1fb058: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fb058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fb05c: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1fb05cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1fb060: 0x3c01b950  lui         $at, 0xB950
    ctx->pc = 0x1fb060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47440 << 16));
    // 0x1fb064: 0x34210d01  ori         $at, $at, 0xD01
    ctx->pc = 0x1fb064u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3329);
    // 0x1fb068: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1fb068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1fb06c: 0x3c013c08  lui         $at, 0x3C08
    ctx->pc = 0x1fb06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15368 << 16));
    // 0x1fb070: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x1fb070u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x1fb074: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1fb074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1fb078: 0x460c2982  mul.s       $f6, $f5, $f12
    ctx->pc = 0x1fb078u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x1fb07c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fb07cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fb080: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1fb080u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1fb084: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1fb084u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1fb088: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1fb088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1fb08c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1fb08cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1fb090: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1fb090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1fb094: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FB094u;
    {
        const bool branch_taken_0x1fb094 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB094u;
        // 0x1fb098: 0x46040040  add.s       $f1, $f0, $f4 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb094) {
            ctx->pc = 0x1FB0BCu;
            return;
        }
    }
    ctx->pc = 0x1FB09Cu;
    // 0x1fb09c: 0x46012802  mul.s       $f0, $f5, $f1
    ctx->pc = 0x1fb09cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x1fb0a0: 0x3c01be2a  lui         $at, 0xBE2A
    ctx->pc = 0x1fb0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48682 << 16));
    // 0x1fb0a4: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1fb0a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1fb0a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fb0a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb0ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fb0acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fb0b0: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x1fb0b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1fb0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB0B4u;
        // 0x1fb0b8: 0x46006000  add.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB0BCu;
}
