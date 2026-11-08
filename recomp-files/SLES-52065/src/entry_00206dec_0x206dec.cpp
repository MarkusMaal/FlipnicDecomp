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

// Function: entry_00206dec
// Address: 0x206dec - 0x206e10
void entry_00206dec_0x206dec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206dec_0x206dec");
#endif

    ctx->pc = 0x206decu;

    // 0x206dec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x206decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x206df0: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x206df0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x206df4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x206DF4u;
    {
        const bool branch_taken_0x206df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206DF4u;
        // 0x206df8: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206df4) {
            ctx->pc = 0x206E10u;
            return;
        }
    }
    ctx->pc = 0x206DFCu;
    // 0x206dfc: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x206dfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x206e00: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x206e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x206e04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x206E04u;
    {
        const bool branch_taken_0x206e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E04u;
        // 0x206e08: 0x2300b  movn        $a2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206e04) {
            ctx->pc = 0x206E28u;
            return;
        }
    }
    ctx->pc = 0x206E0Cu;
    // 0x206e0c: 0x0  nop
    ctx->pc = 0x206e0cu;
    // NOP
    ctx->pc = 0x206e10u;
}
