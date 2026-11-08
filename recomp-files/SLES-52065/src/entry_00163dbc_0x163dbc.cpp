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

// Function: entry_00163dbc
// Address: 0x163dbc - 0x163dd0
void entry_00163dbc_0x163dbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163dbc_0x163dbc");
#endif

    ctx->pc = 0x163dbcu;

    // 0x163dbc: 0x0  nop
    ctx->pc = 0x163dbcu;
    // NOP
    // 0x163dc0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x163dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x163dc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x163dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x163dc8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x163DC8u;
    {
        const bool branch_taken_0x163dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163dc8) {
            ctx->pc = 0x163E90u;
            return;
        }
    }
    ctx->pc = 0x163DD0u;
}
