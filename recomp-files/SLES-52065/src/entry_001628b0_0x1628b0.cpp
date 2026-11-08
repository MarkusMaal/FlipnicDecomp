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

// Function: entry_001628b0
// Address: 0x1628b0 - 0x1628dc
void entry_001628b0_0x1628b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001628b0_0x1628b0");
#endif

    ctx->pc = 0x1628b0u;

    // 0x1628b0: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x1628b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1628b4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1628b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1628b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1628b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1628bc: 0x86420220  lh          $v0, 0x220($s2)
    ctx->pc = 0x1628bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x1628c0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1628C0u;
    {
        const bool branch_taken_0x1628c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1628C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628C0u;
        // 0x1628c4: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1628c0) {
            ctx->pc = 0x1628DCu;
            return;
        }
    }
    ctx->pc = 0x1628C8u;
    // 0x1628c8: 0x3c0237fb  lui         $v0, 0x37FB
    ctx->pc = 0x1628c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14331 << 16));
    // 0x1628cc: 0x3442a882  ori         $v0, $v0, 0xA882
    ctx->pc = 0x1628ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43138);
    // 0x1628d0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1628d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1628d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1628D4u;
    {
        const bool branch_taken_0x1628d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1628D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628D4u;
        // 0x1628d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1628d4) {
            ctx->pc = 0x1628ECu;
            return;
        }
    }
    ctx->pc = 0x1628DCu;
}
