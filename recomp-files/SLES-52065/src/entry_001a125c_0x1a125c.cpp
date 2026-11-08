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

// Function: entry_001a125c
// Address: 0x1a125c - 0x1a12a4
void entry_001a125c_0x1a125c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a125c_0x1a125c");
#endif

    switch (ctx->pc) {
        case 0x1a1280u: goto label_1a1280;
        default: break;
    }

    ctx->pc = 0x1a125cu;

label_1a125c:
    // 0x1a125c: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x1a125cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_1a1260:
    // 0x1a1260: 0xa04009fc  sb          $zero, 0x9FC($v0)
    ctx->pc = 0x1a1260u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2556), (uint8_t)GPR_U32(ctx, 0));
label_1a1264:
    // 0x1a1264: 0x245509fc  addiu       $s5, $v0, 0x9FC
    ctx->pc = 0x1a1264u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 2556));
label_1a1268:
    // 0x1a1268: 0x8c4409e0  lw          $a0, 0x9E0($v0)
    ctx->pc = 0x1a1268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2528)));
label_1a126c:
    // 0x1a126c: 0x904509fc  lbu         $a1, 0x9FC($v0)
    ctx->pc = 0x1a126cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2556)));
label_1a1270:
    // 0x1a1270: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1274:
    // 0x1a1274: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a1274u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a1278:
    // 0x1a1278: 0x320f809  jalr        $t9
label_1a127c:
    if (ctx->pc == 0x1A127Cu) {
        ctx->pc = 0x1A127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1278u;
        // 0x1a127c: 0x245209e0  addiu       $s2, $v0, 0x9E0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1280u;
        goto label_1a1280;
    }
    ctx->pc = 0x1A1278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1280u);
        ctx->pc = 0x1A127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1278u;
        // 0x1a127c: 0x245209e0  addiu       $s2, $v0, 0x9E0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1278u, 0x1A1280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1280u;
label_1a1280:
    // 0x1a1280: 0x92a20000  lbu         $v0, 0x0($s5)
    ctx->pc = 0x1a1280u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_1a1284:
    // 0x1a1284: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a1288:
    if (ctx->pc == 0x1A1288u) {
        ctx->pc = 0x1A128Cu;
        goto label_1a128c;
    }
    ctx->pc = 0x1A1284u;
    {
        const bool branch_taken_0x1a1284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1284) {
            ctx->pc = 0x1A12A4u;
            return;
        }
    }
    ctx->pc = 0x1A128Cu;
label_1a128c:
    // 0x1a128c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1a128cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a1290:
    // 0x1a1290: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a1290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a1294:
    // 0x1a1294: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1298:
    // 0x1a1298: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a1298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a129c:
    // 0x1a129c: 0x320f809  jalr        $t9
label_1a12a0:
    if (ctx->pc == 0x1A12A0u) {
        ctx->pc = 0x1A12A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A129Cu;
        // 0x1a12a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A12A4u;
        goto label_fallthrough_0x1a129c;
    }
    ctx->pc = 0x1A129Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A12A4u);
        ctx->pc = 0x1A12A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A129Cu;
        // 0x1a12a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A129Cu, 0x1A12A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a129c:
    ctx->pc = 0x1A12A4u;
}
