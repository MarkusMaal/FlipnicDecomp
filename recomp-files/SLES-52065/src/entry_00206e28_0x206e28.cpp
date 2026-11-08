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

// Function: entry_00206e28
// Address: 0x206e28 - 0x206e68
void entry_00206e28_0x206e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206e28_0x206e28");
#endif

    ctx->pc = 0x206e28u;

    // 0x206e28: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x206e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x206e2c: 0xc92006  srlv        $a0, $t1, $a2
    ctx->pc = 0x206e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x206e30: 0x24425900  addiu       $v0, $v0, 0x5900
    ctx->pc = 0x206e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22784));
    // 0x206e34: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x206e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x206e38: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x206e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x206e3c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x206e3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x206e40: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x206e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x206e44: 0xa36823  subu        $t5, $a1, $v1
    ctx->pc = 0x206e44u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x206e48: 0x15a00011  bnez        $t5, . + 4 + (0x11 << 2)
    ctx->pc = 0x206E48u;
    {
        const bool branch_taken_0x206e48 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x206E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E48u;
        // 0x206e4c: 0xad7023  subu        $t6, $a1, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206e48) {
            ctx->pc = 0x206E90u;
            return;
        }
    }
    ctx->pc = 0x206E50u;
    // 0x206e50: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x206e50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x206e54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x206E54u;
    {
        const bool branch_taken_0x206e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E54u;
        // 0x206e58: 0x1882023  subu        $a0, $t4, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206e54) {
            ctx->pc = 0x206E68u;
            return;
        }
    }
    ctx->pc = 0x206E5Cu;
    // 0x206e5c: 0x188102b  sltu        $v0, $t4, $t0
    ctx->pc = 0x206e5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x206e60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x206E60u;
    {
        const bool branch_taken_0x206e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206e60) {
            ctx->pc = 0x206E78u;
            return;
        }
    }
    ctx->pc = 0x206E68u;
}
