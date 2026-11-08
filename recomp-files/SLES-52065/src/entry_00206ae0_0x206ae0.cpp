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

// Function: entry_00206ae0
// Address: 0x206ae0 - 0x206b30
void entry_00206ae0_0x206ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206ae0_0x206ae0");
#endif

    ctx->pc = 0x206ae0u;

    // 0x206ae0: 0x8603c  dsll32      $t4, $t0, 0
    ctx->pc = 0x206ae0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) << (32 + 0));
    // 0x206ae4: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x206ae4u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x206ae8: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x206ae8u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x206aec: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x206aecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x206af0: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x206af0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x206af4: 0x5403c  dsll32      $t0, $a1, 0
    ctx->pc = 0x206af4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 0));
    // 0x206af8: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x206af8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x206afc: 0x152000b3  bnez        $t1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x206AFCu;
    {
        const bool branch_taken_0x206afc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x206B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206AFCu;
        // 0x206b00: 0x3a0c82d  daddu       $t9, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206afc) {
            ctx->pc = 0x206DCCu;
            return;
        }
    }
    ctx->pc = 0x206B04u;
    // 0x206b04: 0x148102b  sltu        $v0, $t2, $t0
    ctx->pc = 0x206b04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x206b08: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x206B08u;
    {
        const bool branch_taken_0x206b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B08u;
        // 0x206b0c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b08) {
            ctx->pc = 0x206B98u;
            return;
        }
    }
    ctx->pc = 0x206B10u;
    // 0x206b10: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x206b10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x206b14: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x206B14u;
    {
        const bool branch_taken_0x206b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B14u;
        // 0x206b18: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b14) {
            ctx->pc = 0x206B30u;
            return;
        }
    }
    ctx->pc = 0x206B1Cu;
    // 0x206b1c: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x206b1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x206b20: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x206b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x206b24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x206B24u;
    {
        const bool branch_taken_0x206b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B24u;
        // 0x206b28: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b24) {
            ctx->pc = 0x206B48u;
            return;
        }
    }
    ctx->pc = 0x206B2Cu;
    // 0x206b2c: 0x0  nop
    ctx->pc = 0x206b2cu;
    // NOP
    ctx->pc = 0x206b30u;
}
