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

// Function: FUN_00205170
// Address: 0x205170 - 0x205250
void FUN_00205170_0x205170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00205170_0x205170");
#endif

    switch (ctx->pc) {
        case 0x2051b8u: goto label_2051b8;
        case 0x205208u: goto label_205208;
        default: break;
    }

    ctx->pc = 0x205170u;

    // 0x205170: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x205170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x205174: 0x4a10006  bgez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x205174u;
    {
        const bool branch_taken_0x205174 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x205178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205174u;
        // 0x205178: 0xa0860000  sb          $a2, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205174) {
            ctx->pc = 0x205190u;
            goto label_205190;
        }
    }
    ctx->pc = 0x20517Cu;
    // 0x20517c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x20517cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x205180: 0x52823  negu        $a1, $a1
    ctx->pc = 0x205180u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x205184: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x205184u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x205188: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x205188u;
    {
        const bool branch_taken_0x205188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205188u;
        // 0x20518c: 0x24880002  addiu       $t0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205188) {
            ctx->pc = 0x20519Cu;
            goto label_20519c;
        }
    }
    ctx->pc = 0x205190u;
label_205190:
    // 0x205190: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x205190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x205194: 0x24880002  addiu       $t0, $a0, 0x2
    ctx->pc = 0x205194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x205198: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x205198u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_20519c:
    // 0x20519c: 0x27a60134  addiu       $a2, $sp, 0x134
    ctx->pc = 0x20519cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x2051a0: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x2051a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2051a4: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2051A4u;
    {
        const bool branch_taken_0x2051a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2051A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2051A4u;
        // 0x2051a8: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2051a4) {
            ctx->pc = 0x20522Cu;
            goto label_20522c;
        }
    }
    ctx->pc = 0x2051ACu;
    // 0x2051ac: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2051acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2051b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2051b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2051b4: 0xa7001a  div         $zero, $a1, $a3
    ctx->pc = 0x2051b4u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2051b8:
    // 0x2051b8: 0x50e90001  beql        $a3, $t1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2051B8u;
    {
        const bool branch_taken_0x2051b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x2051b8) {
            ctx->pc = 0x2051BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2051B8u;
            // 0x2051bc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2051C0u;
            goto label_2051c0;
        }
    }
    ctx->pc = 0x2051C0u;
label_2051c0:
    // 0x2051c0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2051c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2051c4: 0x1010  mfhi        $v0
    ctx->pc = 0x2051c4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2051c8: 0x1812  mflo        $v1
    ctx->pc = 0x2051c8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2051cc: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2051ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2051d0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2051d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2051d4: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x2051d4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2051d8: 0x28a3000a  slti        $v1, $a1, 0xA
    ctx->pc = 0x2051d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2051dc: 0x50e90001  beql        $a3, $t1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2051DCu;
    {
        const bool branch_taken_0x2051dc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x2051dc) {
            ctx->pc = 0x2051E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2051DCu;
            // 0x2051e0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2051E4u;
            goto label_2051e4;
        }
    }
    ctx->pc = 0x2051E4u;
label_2051e4:
    // 0x2051e4: 0x5060fff4  beql        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x2051E4u;
    {
        const bool branch_taken_0x2051e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2051e4) {
            ctx->pc = 0x2051E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2051E4u;
            // 0x2051e8: 0xa7001a  div         $zero, $a1, $a3 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2051B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2051b8;
        }
    }
    ctx->pc = 0x2051ECu;
    // 0x2051ec: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2051ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2051f0: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x2051f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x2051f4: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x2051f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2051f8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2051F8u;
    {
        const bool branch_taken_0x2051f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2051FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2051F8u;
        // 0x2051fc: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2051f8) {
            ctx->pc = 0x205244u;
            goto label_205244;
        }
    }
    ctx->pc = 0x205200u;
    // 0x205200: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x205200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205204: 0x0  nop
    ctx->pc = 0x205204u;
    // NOP
label_205208:
    // 0x205208: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x205208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20520c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x20520cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x205210: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x205210u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x205214: 0xc5182b  sltu        $v1, $a2, $a1
    ctx->pc = 0x205214u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x205218: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x205218u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x20521c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20521Cu;
    {
        const bool branch_taken_0x20521c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20521c) {
            ctx->pc = 0x205208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205208;
        }
    }
    ctx->pc = 0x205224u;
    // 0x205224: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x205224u;
    {
        const bool branch_taken_0x205224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205224u;
        // 0x205228: 0x1041023  subu        $v0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205224) {
            ctx->pc = 0x205248u;
            goto label_205248;
        }
    }
    ctx->pc = 0x20522Cu;
label_20522c:
    // 0x20522c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x20522cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x205230: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x205230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x205234: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x205234u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x205238: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x205238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x20523c: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x20523cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x205240: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x205240u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_205244:
    // 0x205244: 0x1041023  subu        $v0, $t0, $a0
    ctx->pc = 0x205244u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_205248:
    // 0x205248: 0x3e00008  jr          $ra
    ctx->pc = 0x205248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205248u;
        // 0x20524c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205250u;
}
