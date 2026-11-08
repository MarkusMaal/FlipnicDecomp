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

// Function: entry_00152b04
// Address: 0x152b04 - 0x152b3c
void entry_00152b04_0x152b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152b04_0x152b04");
#endif

    switch (ctx->pc) {
        case 0x152b28u: goto label_152b28;
        default: break;
    }

    ctx->pc = 0x152b04u;

    // 0x152b04: 0x26c70010  addiu       $a3, $s6, 0x10
    ctx->pc = 0x152b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x152b08: 0x26c60020  addiu       $a2, $s6, 0x20
    ctx->pc = 0x152b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x152b0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x152b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x152b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b14: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x152b14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b18: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x152b18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b1c: 0x26d60030  addiu       $s6, $s6, 0x30
    ctx->pc = 0x152b1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x152b20: 0xc0556ec  jal         func_155BB0
    ctx->pc = 0x152B20u;
    SET_GPR_U32(ctx, 31, 0x152B28u);
    ctx->pc = 0x152B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152B20u;
    // 0x152b24: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x155BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155BB0u, 0x152B20u, 0x152B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152B28u;
label_152b28:
    // 0x152b28: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x152b28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x152b2c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x152B2Cu;
    {
        const bool branch_taken_0x152b2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x152b2c) {
            ctx->pc = 0x152B3Cu;
            return;
        }
    }
    ctx->pc = 0x152B34u;
    // 0x152b34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x152B34u;
    {
        const bool branch_taken_0x152b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B34u;
        // 0x152b38: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152b34) {
            ctx->pc = 0x152B54u;
            return;
        }
    }
    ctx->pc = 0x152B3Cu;
}
