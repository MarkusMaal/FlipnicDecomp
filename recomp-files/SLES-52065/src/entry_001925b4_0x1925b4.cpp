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

// Function: entry_001925b4
// Address: 0x1925b4 - 0x192620
void entry_001925b4_0x1925b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001925b4_0x1925b4");
#endif

    ctx->pc = 0x1925b4u;

    // 0x1925b4: 0x0  nop
    ctx->pc = 0x1925b4u;
    // NOP
    // 0x1925b8: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x1925b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1925bc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1925BCu;
    {
        const bool branch_taken_0x1925bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1925C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1925BCu;
        // 0x1925c0: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1925bc) {
            ctx->pc = 0x192570u;
            return;
        }
    }
    ctx->pc = 0x1925C4u;
    // 0x1925c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1925c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1925c8: 0x7a220550  lq          $v0, 0x550($s1)
    ctx->pc = 0x1925c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x1925cc: 0x7823d700  lq          $v1, -0x2900($at)
    ctx->pc = 0x1925ccu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x36D700u));
    // 0x1925d0: 0x706210a8  pceqw       $v0, $v1, $v0
    ctx->pc = 0x1925d0u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1925d4: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x1925d4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x1925d8: 0x2c43ffff  sltiu       $v1, $v0, -0x1
    ctx->pc = 0x1925d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x1925dc: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x1925DCu;
    {
        const bool branch_taken_0x1925dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1925dc) {
            ctx->pc = 0x1926DCu;
            return;
        }
    }
    ctx->pc = 0x1925E4u;
    // 0x1925e4: 0x7a220550  lq          $v0, 0x550($s1)
    ctx->pc = 0x1925e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x1925e8: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1925e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1925ec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1925ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1925f0: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x1925f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x1925f4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1925f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1925f8: 0x7822d6e0  lq          $v0, -0x2920($at)
    ctx->pc = 0x1925f8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x36D6E0u));
    // 0x1925fc: 0x7ba50040  lq          $a1, 0x40($sp)
    ctx->pc = 0x1925fcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x192600: 0x704510a8  pceqw       $v0, $v0, $a1
    ctx->pc = 0x192600u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x192604: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x192604u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x192608: 0x2c42ffff  sltiu       $v0, $v0, -0x1
    ctx->pc = 0x192608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x19260c: 0x38460001  xori        $a2, $v0, 0x1
    ctx->pc = 0x19260cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x192610: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x192610u;
    {
        const bool branch_taken_0x192610 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x192614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192610u;
        // 0x192614: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192610) {
            ctx->pc = 0x192620u;
            return;
        }
    }
    ctx->pc = 0x192618u;
    // 0x192618: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x192618u;
    {
        const bool branch_taken_0x192618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192618u;
        // 0x19261c: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192618) {
            ctx->pc = 0x192678u;
            return;
        }
    }
    ctx->pc = 0x192620u;
}
