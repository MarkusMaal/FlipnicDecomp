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

// Function: entry_00146ea8
// Address: 0x146ea8 - 0x146f60
void entry_00146ea8_0x146ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146ea8_0x146ea8");
#endif

    ctx->pc = 0x146ea8u;

    // 0x146ea8: 0x2d4b0092  sltiu       $t3, $t2, 0x92
    ctx->pc = 0x146ea8u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)146) ? 1 : 0);
    // 0x146eac: 0x1560ffbe  bnez        $t3, . + 4 + (-0x42 << 2)
    ctx->pc = 0x146EACu;
    {
        const bool branch_taken_0x146eac = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x146eac) {
            ctx->pc = 0x146DA8u;
            return;
        }
    }
    ctx->pc = 0x146EB4u;
    // 0x146eb4: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x146eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x146eb8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x146eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x146ebc: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x146ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x146ec0: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x146ec0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x146ec4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x146ec4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x146ec8: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x146ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146ecc: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x146eccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x146ed0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x146ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x146ed4: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x146ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x146ed8: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x146ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x146edc: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x146edcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x146ee0: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x146ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x146ee4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x146ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x146ee8: 0x1460ff5b  bnez        $v1, . + 4 + (-0xA5 << 2)
    ctx->pc = 0x146EE8u;
    {
        const bool branch_taken_0x146ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x146EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146EE8u;
        // 0x146eec: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ee8) {
            ctx->pc = 0x146C58u;
            return;
        }
    }
    ctx->pc = 0x146EF0u;
    // 0x146ef0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x146ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x146ef4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x146ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x146ef8: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x146ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x146efc: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x146efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x146f00: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x146f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x146f04: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x146f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x146f08: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x146f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x146f0c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x146f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x146f10: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x146f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x146f14: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x146f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x146f18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x146f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x146f1c: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x146f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x146f20: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x146f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x146f24: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x146f24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x146f28: 0x1460fe60  bnez        $v1, . + 4 + (-0x1A0 << 2)
    ctx->pc = 0x146F28u;
    {
        const bool branch_taken_0x146f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x146f28) {
            ctx->pc = 0x1468ACu;
            return;
        }
    }
    ctx->pc = 0x146F30u;
    // 0x146f30: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x146f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x146f34: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x146f34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x146f38: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x146f38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x146f3c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x146f3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x146f40: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x146f40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x146f44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x146f44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x146f48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x146f48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x146f4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x146f4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146f50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x146f50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146f54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x146f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146f58: 0x3e00008  jr          $ra
    ctx->pc = 0x146F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146F58u;
        // 0x146f5c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146F60u;
}
