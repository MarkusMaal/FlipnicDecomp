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

// Function: entry_00120eb4
// Address: 0x120eb4 - 0x120ef4
void entry_00120eb4_0x120eb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120eb4_0x120eb4");
#endif

    ctx->pc = 0x120eb4u;

label_120eb4:
    // 0x120eb4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x120eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_120eb8:
    // 0x120eb8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x120eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_120ebc:
    // 0x120ebc: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x120ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_120ec0:
    // 0x120ec0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x120ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_120ec4:
    // 0x120ec4: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_120ec8:
    if (ctx->pc == 0x120EC8u) {
        ctx->pc = 0x120ECCu;
        goto label_120ecc;
    }
    ctx->pc = 0x120EC4u;
    {
        const bool branch_taken_0x120ec4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x120ec4) {
            ctx->pc = 0x120EF4u;
            return;
        }
    }
    ctx->pc = 0x120ECCu;
label_120ecc:
    // 0x120ecc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x120eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_120ed0:
    // 0x120ed0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x120ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_120ed4:
    // 0x120ed4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x120ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_120ed8:
    // 0x120ed8: 0x3200b  movn        $a0, $zero, $v1
    ctx->pc = 0x120ed8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_120edc:
    // 0x120edc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_120ee0:
    if (ctx->pc == 0x120EE0u) {
        ctx->pc = 0x120EE4u;
        goto label_120ee4;
    }
    ctx->pc = 0x120EDCu;
    {
        const bool branch_taken_0x120edc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x120edc) {
            ctx->pc = 0x120EF4u;
            return;
        }
    }
    ctx->pc = 0x120EE4u;
label_120ee4:
    // 0x120ee4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x120ee4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_120ee8:
    // 0x120ee8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x120ee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_120eec:
    // 0x120eec: 0x320f809  jalr        $t9
label_120ef0:
    if (ctx->pc == 0x120EF0u) {
        ctx->pc = 0x120EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120EECu;
        // 0x120ef0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120EF4u;
        goto label_fallthrough_0x120eec;
    }
    ctx->pc = 0x120EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x120EF4u);
        ctx->pc = 0x120EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120EECu;
        // 0x120ef0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120EECu, 0x120EF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x120eec:
    ctx->pc = 0x120EF4u;
}
