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

// Function: entry_0019dbe0
// Address: 0x19dbe0 - 0x19dc2c
void entry_0019dbe0_0x19dbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dbe0_0x19dbe0");
#endif

    ctx->pc = 0x19dbe0u;

    // 0x19dbe0: 0x8ea20670  lw          $v0, 0x670($s5)
    ctx->pc = 0x19dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
    // 0x19dbe4: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x19dbe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19dbe8: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x19DBE8u;
    {
        const bool branch_taken_0x19dbe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DBE8u;
        // 0x19dbec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dbe8) {
            ctx->pc = 0x19DB58u;
            return;
        }
    }
    ctx->pc = 0x19DBF0u;
    // 0x19dbf0: 0x8ea30990  lw          $v1, 0x990($s5)
    ctx->pc = 0x19dbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2448)));
    // 0x19dbf4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19dbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19dbf8: 0x10650026  beq         $v1, $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x19DBF8u;
    {
        const bool branch_taken_0x19dbf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x19dbf8) {
            ctx->pc = 0x19DC94u;
            return;
        }
    }
    ctx->pc = 0x19DC00u;
    // 0x19dc00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19dc04: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x19DC04u;
    {
        const bool branch_taken_0x19dc04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19dc04) {
            ctx->pc = 0x19DC54u;
            return;
        }
    }
    ctx->pc = 0x19DC0Cu;
    // 0x19dc0c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x19DC0Cu;
    {
        const bool branch_taken_0x19dc0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC0Cu;
        // 0x19dc10: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dc0c) {
            ctx->pc = 0x19DC40u;
            return;
        }
    }
    ctx->pc = 0x19DC14u;
    // 0x19dc14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19dc18: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19DC18u;
    {
        const bool branch_taken_0x19dc18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC18u;
        // 0x19dc1c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dc18) {
            ctx->pc = 0x19DC2Cu;
            return;
        }
    }
    ctx->pc = 0x19DC20u;
    // 0x19dc20: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x19DC20u;
    {
        const bool branch_taken_0x19dc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC20u;
        // 0x19dc24: 0x8ea20664  lw          $v0, 0x664($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dc20) {
            ctx->pc = 0x19DCD0u;
            return;
        }
    }
    ctx->pc = 0x19DC28u;
    // 0x19dc28: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x19dc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19dc2cu;
}
