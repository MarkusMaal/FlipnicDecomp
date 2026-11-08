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

// Function: entry_0013a608
// Address: 0x13a608 - 0x13a6f0
void entry_0013a608_0x13a608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a608_0x13a608");
#endif

    ctx->pc = 0x13a608u;

    // 0x13a608: 0x8f888594  lw          $t0, -0x7A6C($gp)
    ctx->pc = 0x13a608u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935956)));
    // 0x13a60c: 0x1f42818  mult        $a1, $t7, $s4
    ctx->pc = 0x13a60cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x13a610: 0x53900  sll         $a3, $a1, 4
    ctx->pc = 0x13a610u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x13a614: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x13a614u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x13a618: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x13a618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13a61c: 0x8ca50088  lw          $a1, 0x88($a1)
    ctx->pc = 0x13a61cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x13a620: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x13a620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x13a624: 0xafa500ac  sw          $a1, 0xAC($sp)
    ctx->pc = 0x13a624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
    // 0x13a628: 0x8fa700ac  lw          $a3, 0xAC($sp)
    ctx->pc = 0x13a628u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13a62c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x13a62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13a630: 0xa0e50003  sb          $a1, 0x3($a3)
    ctx->pc = 0x13a630u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x13a634: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x13a634u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13a638: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x13a638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x13a63c: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x13a63cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x13a640: 0xa4e00000  sh          $zero, 0x0($a3)
    ctx->pc = 0x13a640u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x13a644: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x13a644u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x13a648: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x13a648u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
    // 0x13a64c: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x13a64cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13a650: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x13a650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x13a654: 0xafa500ac  sw          $a1, 0xAC($sp)
    ctx->pc = 0x13a654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
    // 0x13a658: 0x8c850090  lw          $a1, 0x90($a0)
    ctx->pc = 0x13a658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x13a65c: 0x8ca50068  lw          $a1, 0x68($a1)
    ctx->pc = 0x13a65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x13a660: 0x30a50002  andi        $a1, $a1, 0x2
    ctx->pc = 0x13a660u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x13a664: 0x10a00022  beqz        $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x13A664u;
    {
        const bool branch_taken_0x13a664 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a664) {
            ctx->pc = 0x13A6F0u;
            return;
        }
    }
    ctx->pc = 0x13A66Cu;
    // 0x13a66c: 0x8ccb003c  lw          $t3, 0x3C($a2)
    ctx->pc = 0x13a66cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x13a670: 0x1860c0  sll         $t4, $t8, 3
    ctx->pc = 0x13a670u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 24), 3));
    // 0x13a674: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x13a674u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a678: 0x26470001  addiu       $a3, $s2, 0x1
    ctx->pc = 0x13a678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x13a67c: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x13a67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x13a680: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x13a680u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x13a684: 0x5a842  srl         $s5, $a1, 1
    ctx->pc = 0x13a684u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x13a688: 0x1938c0  sll         $a3, $t9, 3
    ctx->pc = 0x13a688u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 3));
    // 0x13a68c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x13a68cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x13a690: 0xa94025  or          $t0, $a1, $t1
    ctx->pc = 0x13a690u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x13a694: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x13a694u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x13a698: 0xa22a0003  sb          $t2, 0x3($s1)
    ctx->pc = 0x13a698u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x13a69c: 0xb62825  or          $a1, $a1, $s6
    ctx->pc = 0x13a69cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 22));
    // 0x13a6a0: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x13a6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13a6a4: 0xae2b0004  sw          $t3, 0x4($s1)
    ctx->pc = 0x13a6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 11));
    // 0x13a6a8: 0xa6350000  sh          $s5, 0x0($s1)
    ctx->pc = 0x13a6a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 21));
    // 0x13a6ac: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x13a6acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x13a6b0: 0xae28000c  sw          $t0, 0xC($s1)
    ctx->pc = 0x13a6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 8));
    // 0x13a6b4: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x13a6b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a6b8: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x13a6b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x13a6bc: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x13a6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x13a6c0: 0x8cc8003c  lw          $t0, 0x3C($a2)
    ctx->pc = 0x13a6c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x13a6c4: 0x8e0b0000  lw          $t3, 0x0($s0)
    ctx->pc = 0x13a6c4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a6c8: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x13a6c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x13a6cc: 0xa16a0003  sb          $t2, 0x3($t3)
    ctx->pc = 0x13a6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x13a6d0: 0xa1600002  sb          $zero, 0x2($t3)
    ctx->pc = 0x13a6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13a6d4: 0xad670004  sw          $a3, 0x4($t3)
    ctx->pc = 0x13a6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 7));
    // 0x13a6d8: 0xa5750000  sh          $s5, 0x0($t3)
    ctx->pc = 0x13a6d8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 21));
    // 0x13a6dc: 0xad630008  sw          $v1, 0x8($t3)
    ctx->pc = 0x13a6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 3));
    // 0x13a6e0: 0xad65000c  sw          $a1, 0xC($t3)
    ctx->pc = 0x13a6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 5));
    // 0x13a6e4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x13a6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a6e8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x13a6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x13a6ec: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x13a6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x13a6f0u;
}
