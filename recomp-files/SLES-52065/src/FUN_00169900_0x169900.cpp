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

// Function: FUN_00169900
// Address: 0x169900 - 0x16997c
void FUN_00169900_0x169900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00169900_0x169900");
#endif

    switch (ctx->pc) {
        case 0x169900u: goto label_169900;
        case 0x169904u: goto label_169904;
        case 0x169908u: goto label_169908;
        case 0x16990cu: goto label_16990c;
        case 0x169910u: goto label_169910;
        case 0x169914u: goto label_169914;
        case 0x169918u: goto label_169918;
        case 0x16991cu: goto label_16991c;
        case 0x169920u: goto label_169920;
        case 0x169924u: goto label_169924;
        case 0x169928u: goto label_169928;
        case 0x16992cu: goto label_16992c;
        case 0x169930u: goto label_169930;
        case 0x169934u: goto label_169934;
        case 0x169938u: goto label_169938;
        case 0x16993cu: goto label_16993c;
        case 0x169940u: goto label_169940;
        case 0x169944u: goto label_169944;
        case 0x169948u: goto label_169948;
        case 0x16994cu: goto label_16994c;
        case 0x169950u: goto label_169950;
        case 0x169954u: goto label_169954;
        case 0x169958u: goto label_169958;
        case 0x16995cu: goto label_16995c;
        case 0x169960u: goto label_169960;
        case 0x169964u: goto label_169964;
        case 0x169968u: goto label_169968;
        case 0x16996cu: goto label_16996c;
        case 0x169970u: goto label_169970;
        case 0x169974u: goto label_169974;
        case 0x169978u: goto label_169978;
        default: break;
    }

    ctx->pc = 0x169900u;

label_169900:
    // 0x169900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_169904:
    // 0x169904: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_169908:
    // 0x169908: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x169908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16990c:
    // 0x16990c: 0xac800224  sw          $zero, 0x224($a0)
    ctx->pc = 0x16990cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 0));
label_169910:
    // 0x169910: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_169914:
    // 0x169914: 0x8c840228  lw          $a0, 0x228($a0)
    ctx->pc = 0x169914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 552)));
label_169918:
    // 0x169918: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_16991c:
    if (ctx->pc == 0x16991Cu) {
        ctx->pc = 0x169920u;
        goto label_169920;
    }
    ctx->pc = 0x169918u;
    {
        const bool branch_taken_0x169918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x169918) {
            ctx->pc = 0x169928u;
            goto label_169928;
        }
    }
    ctx->pc = 0x169920u;
label_169920:
    // 0x169920: 0xc04be08  jal         func_12F820
label_169924:
    if (ctx->pc == 0x169924u) {
        ctx->pc = 0x169928u;
        goto label_169928;
    }
    ctx->pc = 0x169920u;
    SET_GPR_U32(ctx, 31, 0x169928u);
    ctx->pc = 0x12F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F820u, 0x169920u, 0x169928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169928u;
label_169928:
    // 0x169928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16992c:
    // 0x16992c: 0xc05a680  jal         func_169A00
label_169930:
    if (ctx->pc == 0x169930u) {
        ctx->pc = 0x169930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16992Cu;
        // 0x169930: 0xae000228  sw          $zero, 0x228($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169934u;
        goto label_169934;
    }
    ctx->pc = 0x16992Cu;
    SET_GPR_U32(ctx, 31, 0x169934u);
    ctx->pc = 0x169930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16992Cu;
    // 0x169930: 0xae000228  sw          $zero, 0x228($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169A00u, 0x16992Cu, 0x169934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169934u;
label_169934:
    // 0x169934: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_169938:
    if (ctx->pc == 0x169938u) {
        ctx->pc = 0x16993Cu;
        goto label_16993c;
    }
    ctx->pc = 0x169934u;
    {
        const bool branch_taken_0x169934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x169934) {
            ctx->pc = 0x16996Cu;
            goto label_16996c;
        }
    }
    ctx->pc = 0x16993Cu;
label_16993c:
    // 0x16993c: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x16993cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_169940:
    // 0x169940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169944:
    // 0x169944: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x169944u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_169948:
    // 0x169948: 0x320f809  jalr        $t9
label_16994c:
    if (ctx->pc == 0x16994Cu) {
        ctx->pc = 0x16994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169948u;
        // 0x16994c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169950u;
        goto label_169950;
    }
    ctx->pc = 0x169948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169950u);
        ctx->pc = 0x16994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169948u;
        // 0x16994c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169948u, 0x169950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169950u;
label_169950:
    // 0x169950: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x169950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_169954:
    // 0x169954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169958:
    // 0x169958: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x169958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16995c:
    // 0x16995c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16995cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169960:
    // 0x169960: 0xc0425a4  jal         func_109690
label_169964:
    if (ctx->pc == 0x169964u) {
        ctx->pc = 0x169964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169960u;
        // 0x169964: 0xa20001d3  sb          $zero, 0x1D3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169968u;
        goto label_169968;
    }
    ctx->pc = 0x169960u;
    SET_GPR_U32(ctx, 31, 0x169968u);
    ctx->pc = 0x169964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169960u;
    // 0x169964: 0xa20001d3  sb          $zero, 0x1D3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x169960u, 0x169968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169968u;
label_169968:
    // 0x169968: 0xa2000222  sb          $zero, 0x222($s0)
    ctx->pc = 0x169968u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 546), (uint8_t)GPR_U32(ctx, 0));
label_16996c:
    // 0x16996c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16996cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_169970:
    // 0x169970: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_169974:
    // 0x169974: 0x3e00008  jr          $ra
label_169978:
    if (ctx->pc == 0x169978u) {
        ctx->pc = 0x169978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169974u;
        // 0x169978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16997Cu;
        goto label_fallthrough_0x169974;
    }
    ctx->pc = 0x169974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169974u;
        // 0x169978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x169974:
    ctx->pc = 0x16997Cu;
}
