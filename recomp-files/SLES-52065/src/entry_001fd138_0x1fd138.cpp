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

// Function: entry_001fd138
// Address: 0x1fd138 - 0x1fd17c
void entry_001fd138_0x1fd138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd138_0x1fd138");
#endif

    switch (ctx->pc) {
        case 0x1fd144u: goto label_1fd144;
        default: break;
    }

    ctx->pc = 0x1fd138u;

    // 0x1fd138: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fd138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd13c: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x1FD13Cu;
    SET_GPR_U32(ctx, 31, 0x1FD144u);
    ctx->pc = 0x1FD140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD13Cu;
    // 0x1fd140: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x1FD13Cu, 0x1FD144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD144u;
label_1fd144:
    // 0x1fd144: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1FD144u;
    {
        const bool branch_taken_0x1fd144 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD144u;
        // 0x1fd148: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd144) {
            ctx->pc = 0x1FD17Cu;
            return;
        }
    }
    ctx->pc = 0x1FD14Cu;
    // 0x1fd14c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FD14Cu;
    {
        const bool branch_taken_0x1fd14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd14c) {
            ctx->pc = 0x1FD17Cu;
            return;
        }
    }
    ctx->pc = 0x1FD154u;
    // 0x1fd154: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x1fd154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1fd158: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1fd158u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1fd15c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fd15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fd160: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FD160u;
    {
        const bool branch_taken_0x1fd160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD160u;
        // 0x1fd164: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd160) {
            ctx->pc = 0x1FD17Cu;
            return;
        }
    }
    ctx->pc = 0x1FD168u;
    // 0x1fd168: 0x1262002a  beq         $s3, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1FD168u;
    {
        const bool branch_taken_0x1fd168 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD168u;
        // 0x1fd16c: 0x10102a  slt         $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd168) {
            ctx->pc = 0x1FD214u;
            return;
        }
    }
    ctx->pc = 0x1FD170u;
    // 0x1fd170: 0x539821  addu        $s3, $v0, $s3
    ctx->pc = 0x1fd170u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1fd174: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x1FD174u;
    {
        const bool branch_taken_0x1fd174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD174u;
        // 0x1fd178: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd174) {
            ctx->pc = 0x1FD33Cu;
            return;
        }
    }
    ctx->pc = 0x1FD17Cu;
}
