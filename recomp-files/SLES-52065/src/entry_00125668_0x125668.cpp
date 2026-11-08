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

// Function: entry_00125668
// Address: 0x125668 - 0x1256e4
void entry_00125668_0x125668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125668_0x125668");
#endif

    ctx->pc = 0x125668u;

    // 0x125668: 0x96660060  lhu         $a2, 0x60($s3)
    ctx->pc = 0x125668u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x12566c: 0x2404c000  addiu       $a0, $zero, -0x4000
    ctx->pc = 0x12566cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x125670: 0x32253fff  andi        $a1, $s1, 0x3FFF
    ctx->pc = 0x125670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16383);
    // 0x125674: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x125674u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x125678: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x125678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x12567c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x12567cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x125680: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x125680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x125684: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x125684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x125688: 0xa6640060  sh          $a0, 0x60($s3)
    ctx->pc = 0x125688u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 96), (uint16_t)GPR_U32(ctx, 4));
    // 0x12568c: 0x8e640080  lw          $a0, 0x80($s3)
    ctx->pc = 0x12568cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x125690: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x125690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x125694: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x125694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x125698: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x125698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x12569c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x12569cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1256a0: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x1256a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x1256a4: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x1256a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x1256a8: 0x8e630080  lw          $v1, 0x80($s3)
    ctx->pc = 0x1256a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x1256ac: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1256acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1256b0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1256b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1256b4: 0x8c6300d0  lw          $v1, 0xD0($v1)
    ctx->pc = 0x1256b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x1256b8: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1256b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1256bc: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x1256bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1256c0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1256c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1256c4: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x1256c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1256c8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1256c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1256cc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1256ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1256d0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1256d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1256d4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1256d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1256d8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1256d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1256dc: 0xde620060  ld          $v0, 0x60($s3)
    ctx->pc = 0x1256dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1256e0: 0x0  nop
    ctx->pc = 0x1256e0u;
    // NOP
    ctx->pc = 0x1256e4u;
}
