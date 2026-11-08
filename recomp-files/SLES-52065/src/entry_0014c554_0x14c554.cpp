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

// Function: entry_0014c554
// Address: 0x14c554 - 0x14c5ac
void entry_0014c554_0x14c554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c554_0x14c554");
#endif

    ctx->pc = 0x14c554u;

    // 0x14c554: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x14c554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14c558: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c55c: 0x0  nop
    ctx->pc = 0x14c55cu;
    // NOP
    // 0x14c560: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x14c560u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14c564: 0x0  nop
    ctx->pc = 0x14c564u;
    // NOP
    // 0x14c568: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
    ctx->pc = 0x14C568u;
    {
        const bool branch_taken_0x14c568 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c568) {
            ctx->pc = 0x14C620u;
            return;
        }
    }
    ctx->pc = 0x14C570u;
    // 0x14c570: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x14c570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x14c574: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x14c574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x14c578: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x14c578u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14c57c: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x14C57Cu;
    {
        const bool branch_taken_0x14c57c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c57c) {
            ctx->pc = 0x14C680u;
            return;
        }
    }
    ctx->pc = 0x14C584u;
    // 0x14c584: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x14c584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x14c588: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x14c588u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x14c58c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14c58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14c590: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14c590u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14c594: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14c594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14c598: 0x8c720008  lw          $s2, 0x8($v1)
    ctx->pc = 0x14c598u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x14c59c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x14c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14c5a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14c5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14c5a4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x14C5A4u;
    {
        const bool branch_taken_0x14c5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C5A4u;
        // 0x14c5a8: 0x2439821  addu        $s3, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c5a4) {
            ctx->pc = 0x14C60Cu;
            return;
        }
    }
    ctx->pc = 0x14C5ACu;
}
