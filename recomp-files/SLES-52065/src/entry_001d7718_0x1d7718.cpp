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

// Function: entry_001d7718
// Address: 0x1d7718 - 0x1d7760
void entry_001d7718_0x1d7718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7718_0x1d7718");
#endif

    ctx->pc = 0x1d7718u;

    // 0x1d7718: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d7718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d771c: 0x90e60001  lbu         $a2, 0x1($a3)
    ctx->pc = 0x1d771cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x1d7720: 0x8c430550  lw          $v1, 0x550($v0)
    ctx->pc = 0x1d7720u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x370550u));
    // 0x1d7724: 0x90e50003  lbu         $a1, 0x3($a3)
    ctx->pc = 0x1d7724u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x1d7728: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d7728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d772c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d772cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7730: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d7730u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7734: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d7734u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7738: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d7738u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d773c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d773cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7740: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d7740u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d7744: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1d7744u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d7748: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1d7748u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d774c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1d774cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d7750: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1d7750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d7754: 0x8077768  j           func_1DDDA0
    ctx->pc = 0x1D7754u;
    ctx->pc = 0x1D7758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7754u;
    // 0x1d7758: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDDA0u;
    FUN_001ddda0_0x1ddda0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D775Cu;
    // 0x1d775c: 0x0  nop
    ctx->pc = 0x1d775cu;
    // NOP
    ctx->pc = 0x1d7760u;
}
