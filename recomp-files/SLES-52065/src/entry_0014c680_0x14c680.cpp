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

// Function: entry_0014c680
// Address: 0x14c680 - 0x14c6dc
void entry_0014c680_0x14c680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c680_0x14c680");
#endif

    ctx->pc = 0x14c680u;

    // 0x14c680: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x14c680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x14c684: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x14c684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14c688: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14c688u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c68c: 0x0  nop
    ctx->pc = 0x14c68cu;
    // NOP
    // 0x14c690: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x14c690u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14c694: 0x0  nop
    ctx->pc = 0x14c694u;
    // NOP
    // 0x14c698: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
    ctx->pc = 0x14C698u;
    {
        const bool branch_taken_0x14c698 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c698) {
            ctx->pc = 0x14C750u;
            return;
        }
    }
    ctx->pc = 0x14C6A0u;
    // 0x14c6a0: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x14c6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x14c6a4: 0x8e2500dc  lw          $a1, 0xDC($s1)
    ctx->pc = 0x14c6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x14c6a8: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x14c6a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14c6ac: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x14C6ACu;
    {
        const bool branch_taken_0x14c6ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c6ac) {
            ctx->pc = 0x14C7B0u;
            return;
        }
    }
    ctx->pc = 0x14C6B4u;
    // 0x14c6b4: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x14c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x14c6b8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x14c6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x14c6bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14c6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14c6c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14c6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14c6c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14c6c8: 0x8c710008  lw          $s1, 0x8($v1)
    ctx->pc = 0x14c6c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x14c6cc: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x14c6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14c6d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14c6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14c6d4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x14C6D4u;
    {
        const bool branch_taken_0x14c6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6D4u;
        // 0x14c6d8: 0x2239021  addu        $s2, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c6d4) {
            ctx->pc = 0x14C73Cu;
            return;
        }
    }
    ctx->pc = 0x14C6DCu;
}
