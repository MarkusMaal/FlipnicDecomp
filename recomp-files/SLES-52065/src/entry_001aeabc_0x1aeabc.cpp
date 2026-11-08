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

// Function: entry_001aeabc
// Address: 0x1aeabc - 0x1aeb04
void entry_001aeabc_0x1aeabc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aeabc_0x1aeabc");
#endif

    switch (ctx->pc) {
        case 0x1aead4u: goto label_1aead4;
        default: break;
    }

    ctx->pc = 0x1aeabcu;

label_1aeabc:
    // 0x1aeabc: 0xae8006c0  sw          $zero, 0x6C0($s4)
    ctx->pc = 0x1aeabcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1728), GPR_U32(ctx, 0));
label_1aeac0:
    // 0x1aeac0: 0x8e8407e4  lw          $a0, 0x7E4($s4)
    ctx->pc = 0x1aeac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2020)));
label_1aeac4:
    // 0x1aeac4: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1aeac4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1aeac8:
    // 0x1aeac8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1aeac8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1aeacc:
    // 0x1aeacc: 0x320f809  jalr        $t9
label_1aead0:
    if (ctx->pc == 0x1AEAD0u) {
        ctx->pc = 0x1AEAD4u;
        goto label_1aead4;
    }
    ctx->pc = 0x1AEACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AEAD4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEACCu, 0x1AEAD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AEAD4u;
label_1aead4:
    // 0x1aead4: 0x8e8506b0  lw          $a1, 0x6B0($s4)
    ctx->pc = 0x1aead4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1712)));
label_1aead8:
    // 0x1aead8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aead8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aeadc:
    // 0x1aeadc: 0x8e86068c  lw          $a2, 0x68C($s4)
    ctx->pc = 0x1aeadcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1676)));
label_1aeae0:
    // 0x1aeae0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1aeae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1aeae4:
    // 0x1aeae4: 0x8e870670  lw          $a3, 0x670($s4)
    ctx->pc = 0x1aeae4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
label_1aeae8:
    // 0x1aeae8: 0x8e8207e4  lw          $v0, 0x7E4($s4)
    ctx->pc = 0x1aeae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2020)));
label_1aeaec:
    // 0x1aeaec: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x1aeaecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
label_1aeaf0:
    // 0x1aeaf0: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x1aeaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
label_1aeaf4:
    // 0x1aeaf4: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x1aeaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
label_1aeaf8:
    // 0x1aeaf8: 0x8e8207e4  lw          $v0, 0x7E4($s4)
    ctx->pc = 0x1aeaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2020)));
label_1aeafc:
    // 0x1aeafc: 0xc063e14  jal         func_18F850
label_1aeb00:
    if (ctx->pc == 0x1AEB00u) {
        ctx->pc = 0x1AEB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEAFCu;
        // 0x1aeb00: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB04u;
        goto label_fallthrough_0x1aeafc;
    }
    ctx->pc = 0x1AEAFCu;
    SET_GPR_U32(ctx, 31, 0x1AEB04u);
    ctx->pc = 0x1AEB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEAFCu;
    // 0x1aeb00: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AEAFCu, 0x1AEB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x1aeafc:
    ctx->pc = 0x1AEB04u;
}
