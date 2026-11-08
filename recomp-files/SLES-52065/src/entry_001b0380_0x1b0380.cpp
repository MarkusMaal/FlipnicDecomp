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

// Function: entry_001b0380
// Address: 0x1b0380 - 0x1b0418
void entry_001b0380_0x1b0380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0380_0x1b0380");
#endif

    ctx->pc = 0x1b0380u;

    // 0x1b0380: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1b0380u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b0384: 0x1460ffa0  bnez        $v1, . + 4 + (-0x60 << 2)
    ctx->pc = 0x1B0384u;
    {
        const bool branch_taken_0x1b0384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0384u;
        // 0x1b0388: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0384) {
            ctx->pc = 0x1B0208u;
            return;
        }
    }
    ctx->pc = 0x1B038Cu;
    // 0x1b038c: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1b038cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1b0390: 0x1440ff9c  bnez        $v0, . + 4 + (-0x64 << 2)
    ctx->pc = 0x1B0390u;
    {
        const bool branch_taken_0x1b0390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0390) {
            ctx->pc = 0x1B0204u;
            return;
        }
    }
    ctx->pc = 0x1B0398u;
    // 0x1b0398: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1b0398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1b039c: 0x928302f1  lbu         $v1, 0x2F1($s4)
    ctx->pc = 0x1b039cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 753)));
    // 0x1b03a0: 0x2a22018  mult        $a0, $s5, $v0
    ctx->pc = 0x1b03a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b03a4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1b03a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b03a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b03a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b03ac: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x1B03ACu;
    {
        const bool branch_taken_0x1b03ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B03B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B03ACu;
        // 0x1b03b0: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b03ac) {
            ctx->pc = 0x1B04E4u;
            return;
        }
    }
    ctx->pc = 0x1B03B4u;
    // 0x1b03b4: 0x8e9000fc  lw          $s0, 0xFC($s4)
    ctx->pc = 0x1b03b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 252)));
    // 0x1b03b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b03b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b03bc: 0x8e910118  lw          $s1, 0x118($s4)
    ctx->pc = 0x1b03bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x1b03c0: 0x8e92011c  lw          $s2, 0x11C($s4)
    ctx->pc = 0x1b03c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x1b03c4: 0x92030063  lbu         $v1, 0x63($s0)
    ctx->pc = 0x1b03c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 99)));
    // 0x1b03c8: 0xde020060  ld          $v0, 0x60($s0)
    ctx->pc = 0x1b03c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1b03cc: 0x31ebc  dsll32      $v1, $v1, 26
    ctx->pc = 0x1b03ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 26));
    // 0x1b03d0: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1b03d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1b03d4: 0x31f3e  dsrl32      $v1, $v1, 28
    ctx->pc = 0x1b03d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 28));
    // 0x1b03d8: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1b03d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1b03dc: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x1b03dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x1b03e0: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x1b03e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b03e4: 0x39900  sll         $s3, $v1, 4
    ctx->pc = 0x1b03e4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b03e8: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B03E8u;
    {
        const bool branch_taken_0x1b03e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B03ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B03E8u;
        // 0x1b03ec: 0x2a900  sll         $s5, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b03e8) {
            ctx->pc = 0x1B043Cu;
            return;
        }
    }
    ctx->pc = 0x1B03F0u;
    // 0x1b03f0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b03f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b03f4: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b03f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b03f8: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b03f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b03fc: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b03fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b0400: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b0404: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0404u;
    {
        const bool branch_taken_0x1b0404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0404) {
            ctx->pc = 0x1B0418u;
            return;
        }
    }
    ctx->pc = 0x1B040Cu;
    // 0x1b040c: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x1b040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1b0410: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b0414: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b0418u;
}
