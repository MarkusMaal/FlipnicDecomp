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

// Function: FUN_001e2030
// Address: 0x1e2030 - 0x1e2110
void FUN_001e2030_0x1e2030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e2030_0x1e2030");
#endif

    switch (ctx->pc) {
        case 0x1e2030u: goto label_1e2030;
        case 0x1e2034u: goto label_1e2034;
        case 0x1e2038u: goto label_1e2038;
        case 0x1e203cu: goto label_1e203c;
        case 0x1e2040u: goto label_1e2040;
        case 0x1e2044u: goto label_1e2044;
        case 0x1e2048u: goto label_1e2048;
        case 0x1e204cu: goto label_1e204c;
        case 0x1e2050u: goto label_1e2050;
        case 0x1e2054u: goto label_1e2054;
        case 0x1e2058u: goto label_1e2058;
        case 0x1e205cu: goto label_1e205c;
        case 0x1e2060u: goto label_1e2060;
        case 0x1e2064u: goto label_1e2064;
        case 0x1e2068u: goto label_1e2068;
        case 0x1e206cu: goto label_1e206c;
        case 0x1e2070u: goto label_1e2070;
        case 0x1e2074u: goto label_1e2074;
        case 0x1e2078u: goto label_1e2078;
        case 0x1e207cu: goto label_1e207c;
        case 0x1e2080u: goto label_1e2080;
        case 0x1e2084u: goto label_1e2084;
        case 0x1e2088u: goto label_1e2088;
        case 0x1e208cu: goto label_1e208c;
        case 0x1e2090u: goto label_1e2090;
        case 0x1e2094u: goto label_1e2094;
        case 0x1e2098u: goto label_1e2098;
        case 0x1e209cu: goto label_1e209c;
        case 0x1e20a0u: goto label_1e20a0;
        case 0x1e20a4u: goto label_1e20a4;
        case 0x1e20a8u: goto label_1e20a8;
        case 0x1e20acu: goto label_1e20ac;
        case 0x1e20b0u: goto label_1e20b0;
        case 0x1e20b4u: goto label_1e20b4;
        case 0x1e20b8u: goto label_1e20b8;
        case 0x1e20bcu: goto label_1e20bc;
        case 0x1e20c0u: goto label_1e20c0;
        case 0x1e20c4u: goto label_1e20c4;
        case 0x1e20c8u: goto label_1e20c8;
        case 0x1e20ccu: goto label_1e20cc;
        case 0x1e20d0u: goto label_1e20d0;
        case 0x1e20d4u: goto label_1e20d4;
        case 0x1e20d8u: goto label_1e20d8;
        case 0x1e20dcu: goto label_1e20dc;
        case 0x1e20e0u: goto label_1e20e0;
        case 0x1e20e4u: goto label_1e20e4;
        case 0x1e20e8u: goto label_1e20e8;
        case 0x1e20ecu: goto label_1e20ec;
        case 0x1e20f0u: goto label_1e20f0;
        case 0x1e20f4u: goto label_1e20f4;
        case 0x1e20f8u: goto label_1e20f8;
        case 0x1e20fcu: goto label_1e20fc;
        case 0x1e2100u: goto label_1e2100;
        case 0x1e2104u: goto label_1e2104;
        case 0x1e2108u: goto label_1e2108;
        case 0x1e210cu: goto label_1e210c;
        default: break;
    }

    ctx->pc = 0x1e2030u;

label_1e2030:
    // 0x1e2030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e2034:
    // 0x1e2034: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e2034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e2038:
    // 0x1e2038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e2038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e203c:
    // 0x1e203c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e203cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e2040:
    // 0x1e2040: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e2040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e2044:
    // 0x1e2044: 0x1220002c  beqz        $s1, . + 4 + (0x2C << 2)
label_1e2048:
    if (ctx->pc == 0x1E2048u) {
        ctx->pc = 0x1E2048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2044u;
        // 0x1e2048: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E204Cu;
        goto label_1e204c;
    }
    ctx->pc = 0x1E2044u;
    {
        const bool branch_taken_0x1e2044 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2044u;
        // 0x1e2048: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2044) {
            ctx->pc = 0x1E20F8u;
            goto label_1e20f8;
        }
    }
    ctx->pc = 0x1E204Cu;
label_1e204c:
    // 0x1e204c: 0x8f828728  lw          $v0, -0x78D8($gp)
    ctx->pc = 0x1e204cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936360)));
label_1e2050:
    // 0x1e2050: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e2050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e2054:
    // 0x1e2054: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_1e2058:
    if (ctx->pc == 0x1E2058u) {
        ctx->pc = 0x1E2058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2054u;
        // 0x1e2058: 0xaf828728  sw          $v0, -0x78D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E205Cu;
        goto label_1e205c;
    }
    ctx->pc = 0x1E2054u;
    {
        const bool branch_taken_0x1e2054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2054u;
        // 0x1e2058: 0xaf828728  sw          $v0, -0x78D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2054) {
            ctx->pc = 0x1E20E0u;
            goto label_1e20e0;
        }
    }
    ctx->pc = 0x1E205Cu;
label_1e205c:
    // 0x1e205c: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e205cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e2060:
    // 0x1e2060: 0xc078bfc  jal         func_1E2FF0
label_1e2064:
    if (ctx->pc == 0x1E2064u) {
        ctx->pc = 0x1E2064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2060u;
        // 0x1e2064: 0x2484b6a0  addiu       $a0, $a0, -0x4960 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2068u;
        goto label_1e2068;
    }
    ctx->pc = 0x1E2060u;
    SET_GPR_U32(ctx, 31, 0x1E2068u);
    ctx->pc = 0x1E2064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2060u;
    // 0x1e2064: 0x2484b6a0  addiu       $a0, $a0, -0x4960 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2FF0u, 0x1E2060u, 0x1E2068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2068u;
label_1e2068:
    // 0x1e2068: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e2068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e206c:
    // 0x1e206c: 0xc078bfc  jal         func_1E2FF0
label_1e2070:
    if (ctx->pc == 0x1E2070u) {
        ctx->pc = 0x1E2070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E206Cu;
        // 0x1e2070: 0x2484b760  addiu       $a0, $a0, -0x48A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2074u;
        goto label_1e2074;
    }
    ctx->pc = 0x1E206Cu;
    SET_GPR_U32(ctx, 31, 0x1E2074u);
    ctx->pc = 0x1E2070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E206Cu;
    // 0x1e2070: 0x2484b760  addiu       $a0, $a0, -0x48A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2FF0u, 0x1E206Cu, 0x1E2074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2074u;
label_1e2074:
    // 0x1e2074: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e2074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e2078:
    // 0x1e2078: 0xc078bfc  jal         func_1E2FF0
label_1e207c:
    if (ctx->pc == 0x1E207Cu) {
        ctx->pc = 0x1E207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2078u;
        // 0x1e207c: 0x2484b700  addiu       $a0, $a0, -0x4900 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2080u;
        goto label_1e2080;
    }
    ctx->pc = 0x1E2078u;
    SET_GPR_U32(ctx, 31, 0x1E2080u);
    ctx->pc = 0x1E207Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2078u;
    // 0x1e207c: 0x2484b700  addiu       $a0, $a0, -0x4900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2FF0u, 0x1E2078u, 0x1E2080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2080u;
label_1e2080:
    // 0x1e2080: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e2080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e2084:
    // 0x1e2084: 0x2484b630  addiu       $a0, $a0, -0x49D0
    ctx->pc = 0x1e2084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948400));
label_1e2088:
    // 0x1e2088: 0x8c990010  lw          $t9, 0x10($a0)
    ctx->pc = 0x1e2088u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1e208c:
    // 0x1e208c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e208cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e2090:
    // 0x1e2090: 0x320f809  jalr        $t9
label_1e2094:
    if (ctx->pc == 0x1E2094u) {
        ctx->pc = 0x1E2094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2090u;
        // 0x1e2094: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2098u;
        goto label_1e2098;
    }
    ctx->pc = 0x1E2090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E2098u);
        ctx->pc = 0x1E2094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2090u;
        // 0x1e2094: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2090u, 0x1E2098u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2098u;
label_1e2098:
    // 0x1e2098: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e2098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e209c:
    // 0x1e209c: 0x2484b6a0  addiu       $a0, $a0, -0x4960
    ctx->pc = 0x1e209cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948512));
label_1e20a0:
    // 0x1e20a0: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1e20a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1e20a4:
    // 0x1e20a4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e20a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e20a8:
    // 0x1e20a8: 0x320f809  jalr        $t9
label_1e20ac:
    if (ctx->pc == 0x1E20ACu) {
        ctx->pc = 0x1E20ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20A8u;
        // 0x1e20ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E20B0u;
        goto label_1e20b0;
    }
    ctx->pc = 0x1E20A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E20B0u);
        ctx->pc = 0x1E20ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20A8u;
        // 0x1e20ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E20A8u, 0x1E20B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E20B0u;
label_1e20b0:
    // 0x1e20b0: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e20b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e20b4:
    // 0x1e20b4: 0x2484b760  addiu       $a0, $a0, -0x48A0
    ctx->pc = 0x1e20b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948704));
label_1e20b8:
    // 0x1e20b8: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1e20b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1e20bc:
    // 0x1e20bc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e20bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e20c0:
    // 0x1e20c0: 0x320f809  jalr        $t9
label_1e20c4:
    if (ctx->pc == 0x1E20C4u) {
        ctx->pc = 0x1E20C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20C0u;
        // 0x1e20c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E20C8u;
        goto label_1e20c8;
    }
    ctx->pc = 0x1E20C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E20C8u);
        ctx->pc = 0x1E20C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20C0u;
        // 0x1e20c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E20C0u, 0x1E20C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E20C8u;
label_1e20c8:
    // 0x1e20c8: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e20c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e20cc:
    // 0x1e20cc: 0x2484b700  addiu       $a0, $a0, -0x4900
    ctx->pc = 0x1e20ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948608));
label_1e20d0:
    // 0x1e20d0: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1e20d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1e20d4:
    // 0x1e20d4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e20d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e20d8:
    // 0x1e20d8: 0x320f809  jalr        $t9
label_1e20dc:
    if (ctx->pc == 0x1E20DCu) {
        ctx->pc = 0x1E20DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20D8u;
        // 0x1e20dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E20E0u;
        goto label_1e20e0;
    }
    ctx->pc = 0x1E20D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E20E0u);
        ctx->pc = 0x1E20DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20D8u;
        // 0x1e20dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E20D8u, 0x1E20E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E20E0u;
label_1e20e0:
    // 0x1e20e0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e20e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1e20e4:
    // 0x1e20e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e20e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e20e8:
    // 0x1e20e8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1e20ec:
    if (ctx->pc == 0x1E20ECu) {
        ctx->pc = 0x1E20ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20E8u;
        // 0x1e20ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E20F0u;
        goto label_1e20f0;
    }
    ctx->pc = 0x1E20E8u;
    {
        const bool branch_taken_0x1e20e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E20ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20E8u;
        // 0x1e20ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e20e8) {
            ctx->pc = 0x1E20FCu;
            goto label_1e20fc;
        }
    }
    ctx->pc = 0x1E20F0u;
label_1e20f0:
    // 0x1e20f0: 0xc0401a4  jal         func_100690
label_1e20f4:
    if (ctx->pc == 0x1E20F4u) {
        ctx->pc = 0x1E20F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20F0u;
        // 0x1e20f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E20F8u;
        goto label_1e20f8;
    }
    ctx->pc = 0x1E20F0u;
    SET_GPR_U32(ctx, 31, 0x1E20F8u);
    ctx->pc = 0x1E20F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E20F0u;
    // 0x1e20f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E20F0u, 0x1E20F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E20F8u;
label_1e20f8:
    // 0x1e20f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e20f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e20fc:
    // 0x1e20fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e20fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e2100:
    // 0x1e2100: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e2100u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e2104:
    // 0x1e2104: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2108:
    // 0x1e2108: 0x3e00008  jr          $ra
label_1e210c:
    if (ctx->pc == 0x1E210Cu) {
        ctx->pc = 0x1E210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2108u;
        // 0x1e210c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2110u;
        goto label_fallthrough_0x1e2108;
    }
    ctx->pc = 0x1E2108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2108u;
        // 0x1e210c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e2108:
    ctx->pc = 0x1E2110u;
}
