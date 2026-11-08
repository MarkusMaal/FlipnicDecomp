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

// Function: entry_0017fcd0
// Address: 0x17fcd0 - 0x17fcfc
void entry_0017fcd0_0x17fcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fcd0_0x17fcd0");
#endif

    ctx->pc = 0x17fcd0u;

    // 0x17fcd0: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17fcd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x17fcd4: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x17fcd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x17fcd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17fcd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17fcdc: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x17fcdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17fce0: 0x16430006  bne         $s2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17FCE0u;
    {
        const bool branch_taken_0x17fce0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x17FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FCE0u;
        // 0x17fce4: 0x46006501  sub.s       $f20, $f12, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fce0) {
            ctx->pc = 0x17FCFCu;
            return;
        }
    }
    ctx->pc = 0x17FCE8u;
    // 0x17fce8: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x17fce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x17fcec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17fcf0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17FCF0u;
    {
        const bool branch_taken_0x17fcf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FCF0u;
        // 0x17fcf4: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fcf0) {
            ctx->pc = 0x17FCFCu;
            return;
        }
    }
    ctx->pc = 0x17FCF8u;
    // 0x17fcf8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17fcf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17fcfcu;
}
