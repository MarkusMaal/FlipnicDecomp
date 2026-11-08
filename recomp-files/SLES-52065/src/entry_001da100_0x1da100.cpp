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

// Function: entry_001da100
// Address: 0x1da100 - 0x1da188
void entry_001da100_0x1da100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da100_0x1da100");
#endif

    ctx->pc = 0x1da100u;

    // 0x1da100: 0x252f71d0  addiu       $t7, $t1, 0x71D0
    ctx->pc = 0x1da100u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 29136));
    // 0x1da104: 0x164902  srl         $t1, $s6, 4
    ctx->pc = 0x1da104u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 22), 4));
    // 0x1da108: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x1da108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1da10c: 0x24c370d0  addiu       $v1, $a2, 0x70D0
    ctx->pc = 0x1da10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 28880));
    // 0x1da110: 0x32d2000f  andi        $s2, $s6, 0xF
    ctx->pc = 0x1da110u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)15);
    // 0x1da114: 0x32f4000f  andi        $s4, $s7, 0xF
    ctx->pc = 0x1da114u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)15);
    // 0x1da118: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1da118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da11c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1da120: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x1da120u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da124: 0x24480009  addiu       $t0, $v0, 0x9
    ctx->pc = 0x1da124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1da128: 0x260602d  daddu       $t4, $s3, $zero
    ctx->pc = 0x1da128u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da12c: 0x2411007e  addiu       $s1, $zero, 0x7E
    ctx->pc = 0x1da12cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1da130: 0x180682d  daddu       $t5, $t4, $zero
    ctx->pc = 0x1da130u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da134: 0x172102  srl         $a0, $s7, 4
    ctx->pc = 0x1da134u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 23), 4));
    // 0x1da138: 0x1a0702d  daddu       $t6, $t5, $zero
    ctx->pc = 0x1da138u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da13c: 0x2407fff7  addiu       $a3, $zero, -0x9
    ctx->pc = 0x1da13cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1da140: 0x1c0502d  daddu       $t2, $t6, $zero
    ctx->pc = 0x1da140u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da144: 0xade80000  sw          $t0, 0x0($t7)
    ctx->pc = 0x1da144u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 8));
    // 0x1da148: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x1da148u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da14c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1da14cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1da150: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x1da150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da154: 0xa1910000  sb          $s1, 0x0($t4)
    ctx->pc = 0x1da154u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x1da158: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1da158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da15c: 0xa1a00001  sb          $zero, 0x1($t5)
    ctx->pc = 0x1da15cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1da160: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1da160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da164: 0xa1c90002  sb          $t1, 0x2($t6)
    ctx->pc = 0x1da164u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 2), (uint8_t)GPR_U32(ctx, 9));
    // 0x1da168: 0xa1520003  sb          $s2, 0x3($t2)
    ctx->pc = 0x1da168u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x1da16c: 0xa1640004  sb          $a0, 0x4($t3)
    ctx->pc = 0x1da16cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x1da170: 0xa0b40005  sb          $s4, 0x5($a1)
    ctx->pc = 0x1da170u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 20));
    // 0x1da174: 0xa0d80006  sb          $t8, 0x6($a2)
    ctx->pc = 0x1da174u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 24));
    // 0x1da178: 0xa0590007  sb          $t9, 0x7($v0)
    ctx->pc = 0x1da178u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 25));
    // 0x1da17c: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x1DA17Cu;
    {
        const bool branch_taken_0x1da17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA17Cu;
        // 0x1da180: 0xa2670008  sb          $a3, 0x8($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da17c) {
            ctx->pc = 0x1DA50Cu;
            return;
        }
    }
    ctx->pc = 0x1DA184u;
    // 0x1da184: 0x0  nop
    ctx->pc = 0x1da184u;
    // NOP
    ctx->pc = 0x1da188u;
}
