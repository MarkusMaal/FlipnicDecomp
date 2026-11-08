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

// Function: entry_001d76e4
// Address: 0x1d76e4 - 0x1d7718
void entry_001d76e4_0x1d76e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d76e4_0x1d76e4");
#endif

    ctx->pc = 0x1d76e4u;

    // 0x1d76e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d76e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d76e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d76e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d76ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d76ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d76f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d76f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d76f4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d76f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d76f8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d76f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d76fc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1d76fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d7700: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1d7700u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d7704: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1d7704u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d7708: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1d7708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d770c: 0x80777fe  j           func_1DDFF8
    ctx->pc = 0x1D770Cu;
    ctx->pc = 0x1D7710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D770Cu;
    // 0x1d7710: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDFF8u;
    FUN_001ddff8_0x1ddff8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7714u;
    // 0x1d7714: 0x0  nop
    ctx->pc = 0x1d7714u;
    // NOP
    ctx->pc = 0x1d7718u;
}
