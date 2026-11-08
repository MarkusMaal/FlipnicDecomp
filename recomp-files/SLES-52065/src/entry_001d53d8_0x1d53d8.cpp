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

// Function: entry_001d53d8
// Address: 0x1d53d8 - 0x1d5438
void entry_001d53d8_0x1d53d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d53d8_0x1d53d8");
#endif

    ctx->pc = 0x1d53d8u;

    // 0x1d53d8: 0x26300248  addiu       $s0, $s1, 0x248
    ctx->pc = 0x1d53d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 584));
    // 0x1d53dc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1d53dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d53e0: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x1d53e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x1d53e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d53e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d53e8: 0xa0460200  sb          $a2, 0x200($v0)
    ctx->pc = 0x1d53e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 512), (uint8_t)GPR_U32(ctx, 6));
    // 0x1d53ec: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1d53ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x1d53f0: 0x92220208  lbu         $v0, 0x208($s1)
    ctx->pc = 0x1d53f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 520)));
    // 0x1d53f4: 0x2c4200f0  sltiu       $v0, $v0, 0xF0
    ctx->pc = 0x1d53f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)240) ? 1 : 0);
    // 0x1d53f8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D53F8u;
    {
        const bool branch_taken_0x1d53f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53F8u;
        // 0x1d53fc: 0x8ec3054c  lw          $v1, 0x54C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53f8) {
            ctx->pc = 0x1D5438u;
            return;
        }
    }
    ctx->pc = 0x1D5400u;
    // 0x1d5400: 0x8ec4054c  lw          $a0, 0x54C($s6)
    ctx->pc = 0x1d5400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1356)));
    // 0x1d5404: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1d5404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1d5408: 0x24469e98  addiu       $a2, $v0, -0x6168
    ctx->pc = 0x1d5408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942360));
    // 0x1d540c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1d540cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d5410: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x1d5410u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1d5414: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1d5414u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d5418: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x1d5418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1d541c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d541cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d5420: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1d5420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d5424: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x1D5424u;
    {
        const bool branch_taken_0x1d5424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5424) {
            ctx->pc = 0x1D5428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5424u;
            // 0x1d5428: 0x8e220204  lw          $v0, 0x204($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D54ECu;
            return;
        }
    }
    ctx->pc = 0x1D542Cu;
    // 0x1d542c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1D542Cu;
    {
        const bool branch_taken_0x1d542c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D542Cu;
        // 0x1d5430: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d542c) {
            ctx->pc = 0x1D54D8u;
            return;
        }
    }
    ctx->pc = 0x1D5434u;
    // 0x1d5434: 0x0  nop
    ctx->pc = 0x1d5434u;
    // NOP
    ctx->pc = 0x1d5438u;
}
