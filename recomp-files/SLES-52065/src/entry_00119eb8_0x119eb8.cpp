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

// Function: entry_00119eb8
// Address: 0x119eb8 - 0x119ef4
void entry_00119eb8_0x119eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119eb8_0x119eb8");
#endif

    switch (ctx->pc) {
        case 0x119edcu: goto label_119edc;
        case 0x119eecu: goto label_119eec;
        default: break;
    }

    ctx->pc = 0x119eb8u;

    // 0x119eb8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x119eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x119ebc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x119ebcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x119ec0: 0x0  nop
    ctx->pc = 0x119ec0u;
    // NOP
    // 0x119ec4: 0x0  nop
    ctx->pc = 0x119ec4u;
    // NOP
    // 0x119ec8: 0x1810  mfhi        $v1
    ctx->pc = 0x119ec8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x119ecc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x119ECCu;
    {
        const bool branch_taken_0x119ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x119ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119ECCu;
        // 0x119ed0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ecc) {
            ctx->pc = 0x119EF4u;
            return;
        }
    }
    ctx->pc = 0x119ED4u;
    // 0x119ed4: 0xc04b220  jal         func_12C880
    ctx->pc = 0x119ED4u;
    SET_GPR_U32(ctx, 31, 0x119EDCu);
    ctx->pc = 0x12C880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C880u, 0x119ED4u, 0x119EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119EDCu;
label_119edc:
    // 0x119edc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x119edcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x119ee0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ee4: 0xc04b3ac  jal         func_12CEB0
    ctx->pc = 0x119EE4u;
    SET_GPR_U32(ctx, 31, 0x119EECu);
    ctx->pc = 0x119EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119EE4u;
    // 0x119ee8: 0x24a5e608  addiu       $a1, $a1, -0x19F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CEB0u, 0x119EE4u, 0x119EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119EECu;
label_119eec:
    // 0x119eec: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x119EECu;
    {
        const bool branch_taken_0x119eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119EECu;
        // 0x119ef0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119eec) {
            ctx->pc = 0x119F44u;
            return;
        }
    }
    ctx->pc = 0x119EF4u;
}
