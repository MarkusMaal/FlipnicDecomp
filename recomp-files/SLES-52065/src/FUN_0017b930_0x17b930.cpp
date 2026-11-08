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

// Function: FUN_0017b930
// Address: 0x17b930 - 0x17b9f8
void FUN_0017b930_0x17b930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017b930_0x17b930");
#endif

    switch (ctx->pc) {
        case 0x17b944u: goto label_17b944;
        case 0x17b984u: goto label_17b984;
        case 0x17b9a8u: goto label_17b9a8;
        default: break;
    }

    ctx->pc = 0x17b930u;

    // 0x17b930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b934: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b938: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17b93c: 0xc059990  jal         func_166640
    ctx->pc = 0x17B93Cu;
    SET_GPR_U32(ctx, 31, 0x17B944u);
    ctx->pc = 0x17B940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B93Cu;
    // 0x17b940: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166640u, 0x17B93Cu, 0x17B944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B944u;
label_17b944:
    // 0x17b944: 0x18400027  blez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x17B944u;
    {
        const bool branch_taken_0x17b944 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x17b944) {
            ctx->pc = 0x17B9E4u;
            goto label_17b9e4;
        }
    }
    ctx->pc = 0x17B94Cu;
    // 0x17b94c: 0x92020220  lbu         $v0, 0x220($s0)
    ctx->pc = 0x17b94cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x17b950: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x17B950u;
    {
        const bool branch_taken_0x17b950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b950) {
            ctx->pc = 0x17B98Cu;
            goto label_17b98c;
        }
    }
    ctx->pc = 0x17B958u;
    // 0x17b958: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17b958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17b95c: 0x80420024  lb          $v0, 0x24($v0)
    ctx->pc = 0x17b95cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x17b960: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17B960u;
    {
        const bool branch_taken_0x17b960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b960) {
            ctx->pc = 0x17B96Cu;
            goto label_17b96c;
        }
    }
    ctx->pc = 0x17B968u;
    // 0x17b968: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17b968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_17b96c:
    // 0x17b96c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x17b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x17b970: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x17b970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17b974: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x17b974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x17b978: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17b978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17b97c: 0xc0425a4  jal         func_109690
    ctx->pc = 0x17B97Cu;
    SET_GPR_U32(ctx, 31, 0x17B984u);
    ctx->pc = 0x17B980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B97Cu;
    // 0x17b980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x17B97Cu, 0x17B984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B984u;
label_17b984:
    // 0x17b984: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x17B984u;
    {
        const bool branch_taken_0x17b984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B984u;
        // 0x17b988: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b984) {
            ctx->pc = 0x17B9DCu;
            goto label_17b9dc;
        }
    }
    ctx->pc = 0x17B98Cu;
label_17b98c:
    // 0x17b98c: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x17b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x17b990: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x17b990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x17b994: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x17b994u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17b998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b99c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x17b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x17b9a0: 0xc0425a4  jal         func_109690
    ctx->pc = 0x17B9A0u;
    SET_GPR_U32(ctx, 31, 0x17B9A8u);
    ctx->pc = 0x17B9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B9A0u;
    // 0x17b9a4: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x17B9A0u, 0x17B9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B9A8u;
label_17b9a8:
    // 0x17b9a8: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x17b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x17b9ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17b9b0: 0xae0201d4  sw          $v0, 0x1D4($s0)
    ctx->pc = 0x17b9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
    // 0x17b9b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17b9b8: 0x80430024  lb          $v1, 0x24($v0)
    ctx->pc = 0x17b9b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x17b9bc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17B9BCu;
    {
        const bool branch_taken_0x17b9bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b9bc) {
            ctx->pc = 0x17B9C8u;
            goto label_17b9c8;
        }
    }
    ctx->pc = 0x17B9C4u;
    // 0x17b9c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x17b9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_17b9c8:
    // 0x17b9c8: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x17b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x17b9cc: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17B9CCu;
    {
        const bool branch_taken_0x17b9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x17B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B9CCu;
        // 0x17b9d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b9cc) {
            ctx->pc = 0x17B9D8u;
            goto label_17b9d8;
        }
    }
    ctx->pc = 0x17B9D4u;
    // 0x17b9d4: 0xae0201d4  sw          $v0, 0x1D4($s0)
    ctx->pc = 0x17b9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
label_17b9d8:
    // 0x17b9d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17b9dc:
    // 0x17b9dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17B9DCu;
    {
        const bool branch_taken_0x17b9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B9DCu;
        // 0x17b9e0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b9dc) {
            ctx->pc = 0x17B9ECu;
            goto label_17b9ec;
        }
    }
    ctx->pc = 0x17B9E4u;
label_17b9e4:
    // 0x17b9e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17b9e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17b9ec:
    // 0x17b9ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b9ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x17B9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B9F0u;
        // 0x17b9f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B9F8u;
}
