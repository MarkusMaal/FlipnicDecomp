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

// Function: entry_0013931c
// Address: 0x13931c - 0x1393b8
void entry_0013931c_0x13931c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013931c_0x13931c");
#endif

    ctx->pc = 0x13931cu;

    // 0x13931c: 0x0  nop
    ctx->pc = 0x13931cu;
    // NOP
    // 0x139320: 0x12e00025  beqz        $s7, . + 4 + (0x25 << 2)
    ctx->pc = 0x139320u;
    {
        const bool branch_taken_0x139320 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x139320) {
            ctx->pc = 0x1393B8u;
            return;
        }
    }
    ctx->pc = 0x139328u;
    // 0x139328: 0x8e840090  lw          $a0, 0x90($s4)
    ctx->pc = 0x139328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x13932c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x13932cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x139330: 0x8fa3017c  lw          $v1, 0x17C($sp)
    ctx->pc = 0x139330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x139334: 0x34ac0404  ori         $t4, $a1, 0x404
    ctx->pc = 0x139334u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1028);
    // 0x139338: 0x3c066c00  lui         $a2, 0x6C00
    ctx->pc = 0x139338u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27648 << 16));
    // 0x13933c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x13933cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139340: 0x34ca81de  ori         $t2, $a2, 0x81DE
    ctx->pc = 0x139340u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)33246);
    // 0x139344: 0x75c00  sll         $t3, $a3, 16
    ctx->pc = 0x139344u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x139348: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x139348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x13934c: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x13934cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x139350: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x139350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x139354: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x139354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x139358: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x139358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x13935c: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x13935cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x139360: 0x881021  addu        $v0, $a0, $t0
    ctx->pc = 0x139360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x139364: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x139364u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x139368: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x139368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13936c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13936cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x139370: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x139370u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x139374: 0xa4a70000  sh          $a3, 0x0($a1)
    ctx->pc = 0x139374u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x139378: 0xacac0008  sw          $t4, 0x8($a1)
    ctx->pc = 0x139378u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 12));
    // 0x13937c: 0xacaa000c  sw          $t2, 0xC($a1)
    ctx->pc = 0x13937cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 10));
    // 0x139380: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x139380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139384: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x139384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x139388: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x139388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x13938c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13938cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139390: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x139390u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x139394: 0xa0660003  sb          $a2, 0x3($v1)
    ctx->pc = 0x139394u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x139398: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x139398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13939c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x13939cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1393a0: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x1393a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1393a4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1393a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1393a8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1393a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1393ac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1393acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1393b0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1393b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1393b4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1393b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1393b8u;
}
