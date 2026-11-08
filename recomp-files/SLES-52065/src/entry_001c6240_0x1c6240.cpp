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

// Function: entry_001c6240
// Address: 0x1c6240 - 0x1c62d4
void entry_001c6240_0x1c6240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6240_0x1c6240");
#endif

    switch (ctx->pc) {
        case 0x1c6254u: goto label_1c6254;
        case 0x1c6260u: goto label_1c6260;
        case 0x1c6270u: goto label_1c6270;
        case 0x1c6298u: goto label_1c6298;
        case 0x1c62a0u: goto label_1c62a0;
        case 0x1c62b4u: goto label_1c62b4;
        default: break;
    }

    ctx->pc = 0x1c6240u;

    // 0x1c6240: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c6240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c6244: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1c6244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c6248: 0x24a51f20  addiu       $a1, $a1, 0x1F20
    ctx->pc = 0x1c6248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7968));
    // 0x1c624c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C624Cu;
    SET_GPR_U32(ctx, 31, 0x1C6254u);
    ctx->pc = 0x1C6250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C624Cu;
    // 0x1c6250: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C624Cu, 0x1C6254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6254u;
label_1c6254:
    // 0x1c6254: 0x26440014  addiu       $a0, $s2, 0x14
    ctx->pc = 0x1c6254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x1c6258: 0xc06e100  jal         func_1B8400
    ctx->pc = 0x1C6258u;
    SET_GPR_U32(ctx, 31, 0x1C6260u);
    ctx->pc = 0x1C625Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6258u;
    // 0x1c625c: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8400u, 0x1C6258u, 0x1C6260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6260u;
label_1c6260:
    // 0x1c6260: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c6260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6264: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1c6264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c6268: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C6268u;
    SET_GPR_U32(ctx, 31, 0x1C6270u);
    ctx->pc = 0x1C626Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6268u;
    // 0x1c626c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C6268u, 0x1C6270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6270u;
label_1c6270:
    // 0x1c6270: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x1c6270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1c6274: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x1c6274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1c6278: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1C6278u;
    {
        const bool branch_taken_0x1c6278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6278u;
        // 0x1c627c: 0x3c010023  lui         $at, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6278) {
            ctx->pc = 0x1C6358u;
            return;
        }
    }
    ctx->pc = 0x1C6280u;
    // 0x1c6280: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1c6280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    // 0x1c6284: 0x9042282b  lbu         $v0, 0x282B($v0)
    ctx->pc = 0x1c6284u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10283)));
    // 0x1c6288: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C6288u;
    {
        const bool branch_taken_0x1c6288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6288u;
        // 0x1c628c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6288) {
            ctx->pc = 0x1C62D8u;
            return;
        }
    }
    ctx->pc = 0x1C6290u;
    // 0x1c6290: 0xc073090  jal         func_1CC240
    ctx->pc = 0x1C6290u;
    SET_GPR_U32(ctx, 31, 0x1C6298u);
    ctx->pc = 0x1CC240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC240u, 0x1C6290u, 0x1C6298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6298u;
label_1c6298:
    // 0x1c6298: 0xc072e84  jal         func_1CBA10
    ctx->pc = 0x1C6298u;
    SET_GPR_U32(ctx, 31, 0x1C62A0u);
    ctx->pc = 0x1C629Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6298u;
    // 0x1c629c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBA10u, 0x1C6298u, 0x1C62A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C62A0u;
label_1c62a0:
    // 0x1c62a0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1c62a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c62a4: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1C62A4u;
    {
        const bool branch_taken_0x1c62a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c62a4) {
            ctx->pc = 0x1C62D4u;
            return;
        }
    }
    ctx->pc = 0x1C62ACu;
    // 0x1c62ac: 0xc073090  jal         func_1CC240
    ctx->pc = 0x1C62ACu;
    SET_GPR_U32(ctx, 31, 0x1C62B4u);
    ctx->pc = 0x1CC240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC240u, 0x1C62ACu, 0x1C62B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C62B4u;
label_1c62b4:
    // 0x1c62b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c62b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c62b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c62b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c62bc: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x1c62bcu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c62c0: 0x0  nop
    ctx->pc = 0x1c62c0u;
    // NOP
    // 0x1c62c4: 0x0  nop
    ctx->pc = 0x1c62c4u;
    // NOP
    // 0x1c62c8: 0x1010  mfhi        $v0
    ctx->pc = 0x1c62c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c62cc: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C62CCu;
    {
        const bool branch_taken_0x1c62cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c62cc) {
            ctx->pc = 0x1C62D8u;
            return;
        }
    }
    ctx->pc = 0x1C62D4u;
}
