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

// Function: entry_00152964
// Address: 0x152964 - 0x15299c
void entry_00152964_0x152964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152964_0x152964");
#endif

    switch (ctx->pc) {
        case 0x152988u: goto label_152988;
        default: break;
    }

    ctx->pc = 0x152964u;

    // 0x152964: 0x26c70010  addiu       $a3, $s6, 0x10
    ctx->pc = 0x152964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x152968: 0x26c60020  addiu       $a2, $s6, 0x20
    ctx->pc = 0x152968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x15296c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15296cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152970: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x152970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152974: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x152974u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152978: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x152978u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15297c: 0x26d60030  addiu       $s6, $s6, 0x30
    ctx->pc = 0x15297cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x152980: 0xc0554d8  jal         func_155360
    ctx->pc = 0x152980u;
    SET_GPR_U32(ctx, 31, 0x152988u);
    ctx->pc = 0x152984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152980u;
    // 0x152984: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x155360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155360u, 0x152980u, 0x152988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152988u;
label_152988:
    // 0x152988: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x152988u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15298c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x15298Cu;
    {
        const bool branch_taken_0x15298c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15298c) {
            ctx->pc = 0x15299Cu;
            return;
        }
    }
    ctx->pc = 0x152994u;
    // 0x152994: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x152994u;
    {
        const bool branch_taken_0x152994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152994u;
        // 0x152998: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152994) {
            ctx->pc = 0x1529B4u;
            return;
        }
    }
    ctx->pc = 0x15299Cu;
}
