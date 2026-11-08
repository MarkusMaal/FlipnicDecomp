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

// Function: FUN_001dd568
// Address: 0x1dd568 - 0x1dd634
void FUN_001dd568_0x1dd568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dd568_0x1dd568");
#endif

    ctx->pc = 0x1dd568u;

    // 0x1dd568: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1dd568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd56c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1dd56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1dd570: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x1dd570u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1dd574: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1dd574u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dd578: 0x861823  subu        $v1, $a0, $a2
    ctx->pc = 0x1dd578u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1dd57c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dd57cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dd580: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd580u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dd584: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1dd584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dd588: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1dd588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1dd58c: 0x23840  sll         $a3, $v0, 1
    ctx->pc = 0x1dd58cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1dd590: 0x348c0  sll         $t1, $v1, 3
    ctx->pc = 0x1dd590u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1dd594: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1DD594u;
    {
        const bool branch_taken_0x1dd594 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD594u;
        // 0x1dd598: 0x864023  subu        $t0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd594) {
            ctx->pc = 0x1DD5C8u;
            goto label_1dd5c8;
        }
    }
    ctx->pc = 0x1DD59Cu;
    // 0x1dd59c: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x1dd59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1dd5a0: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1dd5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1dd5a4: 0xe2001a  div         $zero, $a3, $v0
    ctx->pc = 0x1dd5a4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1dd5a8: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x1dd5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x1dd5ac: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DD5ACu;
    {
        const bool branch_taken_0x1dd5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd5ac) {
            ctx->pc = 0x1DD5B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD5ACu;
            // 0x1dd5b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD5B4u;
            goto label_1dd5b4;
        }
    }
    ctx->pc = 0x1DD5B4u;
label_1dd5b4:
    // 0x1dd5b4: 0x2812  mflo        $a1
    ctx->pc = 0x1dd5b4u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1dd5b8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1dd5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1dd5bc: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1dd5bcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1dd5c0: 0x2012  mflo        $a0
    ctx->pc = 0x1dd5c0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1dd5c4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1dd5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dd5c8:
    // 0x1dd5c8: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x1dd5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1dd5cc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1dd5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1dd5d0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1dd5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1dd5d4: 0x24647330  addiu       $a0, $v1, 0x7330
    ctx->pc = 0x1dd5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 29488));
    // 0x1dd5d8: 0x240c0  sll         $t0, $v0, 3
    ctx->pc = 0x1dd5d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dd5dc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1dd5dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5e0: 0x25020080  addiu       $v0, $t0, 0x80
    ctx->pc = 0x1dd5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
    // 0x1dd5e4: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x1dd5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1dd5e8: 0xc23821  addu        $a3, $a2, $v0
    ctx->pc = 0x1dd5e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1dd5ec: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x1dd5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1dd5f0: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1dd5f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5f4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1dd5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1dd5f8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DD5F8u;
    {
        const bool branch_taken_0x1dd5f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5F8u;
        // 0x1dd5fc: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd5f8) {
            ctx->pc = 0x1DD620u;
            goto label_1dd620;
        }
    }
    ctx->pc = 0x1DD600u;
    // 0x1dd600: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1dd600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1dd604: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD604u;
    {
        const bool branch_taken_0x1dd604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD604u;
        // 0x1dd608: 0x1061821  addu        $v1, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd604) {
            ctx->pc = 0x1DD620u;
            goto label_1dd620;
        }
    }
    ctx->pc = 0x1DD60Cu;
    // 0x1dd60c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dd60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd610: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x1dd610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x1dd614: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD614u;
        // 0x1dd618: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD61Cu;
    // 0x1dd61c: 0x0  nop
    ctx->pc = 0x1dd61cu;
    // NOP
label_1dd620:
    // 0x1dd620: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1dd620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dd624: 0x2403fbff  addiu       $v1, $zero, -0x401
    ctx->pc = 0x1dd624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x1dd628: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1dd628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1dd62c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD62Cu;
        // 0x1dd630: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD62Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD634u;
}
